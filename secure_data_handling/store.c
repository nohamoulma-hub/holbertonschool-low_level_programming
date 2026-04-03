#include <stdlib.h>
#include <string.h>
#include "store.h"

/**
 * store_init - Initialise la structure du store.
 * @st: Pointeur vers le store à initialiser.
 */
void store_init(store_t *st)
{
	if (st)
		st->head = NULL;
}
/**
 * node_create - Crée un nouveau nœud de liste interne.
 * @s: Pointeur vers la session à stocker.
 *
 * Return: Pointeur vers le nouveau nœud, ou NULL en cas d'échec.
 */
static node_t *node_create(session_t *s)
{
	node_t *n = (node_t *)malloc(sizeof(*n));
	if (!n)
		return NULL;
	n->sess = s;
	n->next = NULL;
	return n;
}
/**
 * store_add - Ajoute une session au store avec gestion de la propriété.
 * @st: Pointeur vers le store.
 * @s: Pointeur vers la session à ajouter.
 *
 * Return: 1 succès, 0 en cas d'échec (la session est alors détruite).
 */
int store_add(store_t *st, session_t *s)
{
	node_t *n, *cur;

	if (!st || !s)
		return 0;
	if (!s->id)
		{
			session_destroy(s);
			return (0);
		}

	cur = st->head;
	while (cur) {
		if (cur->sess && cur->sess->id && strcmp(cur->sess->id, s->id) == 0)
		{
			session_destroy(s);
			return 0;
		}
		cur = cur->next;
	}

	n = node_create(s);
	if (!n) 
	{
		session_destroy(s);
		return 0;
	}

	n->next = st->head;
	st->head = n;
	return 1;
}
/**
 * store_get - Récupère une session par son ID.
 * @st: Pointeur vers le store.
 * @id: ID de la session recherchée.
 *
 * Return: Pointeur vers la session, ou NULL si non trouvée.
 */
session_t *store_get(store_t *st, const char *id)
{
	node_t *cur;

	if (!st || !id)
		return NULL;

	cur = st->head;
	while (cur) {
		if (cur->sess && cur->sess->id && strcmp(cur->sess->id, id) == 0)
			return cur->sess;
		cur = cur->next;
	}
	return NULL;
}
/**
 * store_delete - Supprime une session avec transfert optionnel de propriété.
 * @st: Pointeur vers le store.
 * @id: ID de la session à supprimer.
 * @out: Pointeur pour récupérer la session (si NULL, la session est détruite).
 *
 * Return: 1 si supprimée, 0 si non trouvée.
 */
int store_delete(store_t *st, const char *id, session_t **out)
{
	node_t *cur, *prev;

	if (!st || !id)
		return 0;

	prev = NULL;
	cur = st->head;

	while (cur) {
		if (cur->sess && cur->sess->id && strcmp(cur->sess->id, id) == 0) {
			if (prev)
				prev->next = cur->next;
			else
				st->head = cur->next;

			if (out)
				*out = cur->sess;
			else
				session_destroy(cur->sess);
			free(cur);
			return 1;
		}
		prev = cur;
		cur = cur->next;
	}

	return 0;
}
/**
 * store_destroy - Libère proprement tout le store (Idempotent).
 * @st: Pointeur vers le store à détruire.
 */
void store_destroy(store_t *st)
{
	node_t *cur, *next;

	if (!st || !st->head)
		return;

	cur = st->head;
	st->head = NULL;
	while (cur) {
		next = cur->next;
		if (cur->sess)
		{
			session_destroy(cur->sess);
		}
		free(cur);

		cur = next;
	}
	st->head = NULL;
}