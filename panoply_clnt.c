/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "panoply.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

panoply *
init_1(panoply *argp, CLIENT *clnt)
{
	static panoply clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, INIT,
		(xdrproc_t) xdr_panoply, (caddr_t) argp,
		(xdrproc_t) xdr_panoply, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

compte *
create_account_1(void *argp, CLIENT *clnt)
{
	static compte clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, CREATE_ACCOUNT,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_compte, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

int *
log_in_1(identifiants *argp, CLIENT *clnt)
{
	static int clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, LOG_IN,
		(xdrproc_t) xdr_identifiants, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

int *
list_all_collection_1(list_collection *argp, CLIENT *clnt)
{
	static int clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, LIST_ALL_COLLECTION,
		(xdrproc_t) xdr_list_collection, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

int *
list_all_collection_clothes_1(list_collection *argp, CLIENT *clnt)
{
	static int clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, LIST_ALL_COLLECTION_CLOTHES,
		(xdrproc_t) xdr_list_collection, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

list_collection *
add_cloth_to_collection_1(list_collection *argp, CLIENT *clnt)
{
	static list_collection clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, ADD_CLOTH_TO_COLLECTION,
		(xdrproc_t) xdr_list_collection, (caddr_t) argp,
		(xdrproc_t) xdr_list_collection, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

list_collection *
remove_cloth_to_collection_1(list_collection *argp, CLIENT *clnt)
{
	static list_collection clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, REMOVE_CLOTH_TO_COLLECTION,
		(xdrproc_t) xdr_list_collection, (caddr_t) argp,
		(xdrproc_t) xdr_list_collection, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

int *
list_type_abo_1(list_abonnement *argp, CLIENT *clnt)
{
	static int clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, LIST_TYPE_ABO,
		(xdrproc_t) xdr_list_abonnement, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

compte *
affecter_abo_client_1(compte *argp, CLIENT *clnt)
{
	static compte clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, AFFECTER_ABO_CLIENT,
		(xdrproc_t) xdr_compte, (caddr_t) argp,
		(xdrproc_t) xdr_compte, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

compte *
modif_abo_1(compte *argp, CLIENT *clnt)
{
	static compte clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, MODIF_ABO,
		(xdrproc_t) xdr_compte, (caddr_t) argp,
		(xdrproc_t) xdr_compte, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

list_abonnement *
add_subscription_1(list_abonnement *argp, CLIENT *clnt)
{
	static list_abonnement clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, ADD_SUBSCRIPTION,
		(xdrproc_t) xdr_list_abonnement, (caddr_t) argp,
		(xdrproc_t) xdr_list_abonnement, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

int *
display_abonnement_1(abonnement *argp, CLIENT *clnt)
{
	static int clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, DISPLAY_ABONNEMENT,
		(xdrproc_t) xdr_abonnement, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

article_list *
add_article_1(article_list *argp, CLIENT *clnt)
{
	static article_list clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, ADD_ARTICLE,
		(xdrproc_t) xdr_article_list, (caddr_t) argp,
		(xdrproc_t) xdr_article_list, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

article_list *
update_article_1(article_list *argp, CLIENT *clnt)
{
	static article_list clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, UPDATE_ARTICLE,
		(xdrproc_t) xdr_article_list, (caddr_t) argp,
		(xdrproc_t) xdr_article_list, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

article_list *
delete_article_1(article_list *argp, CLIENT *clnt)
{
	static article_list clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, DELETE_ARTICLE,
		(xdrproc_t) xdr_article_list, (caddr_t) argp,
		(xdrproc_t) xdr_article_list, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

int *
fetch_article_1(article_list *argp, CLIENT *clnt)
{
	static int clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, FETCH_ARTICLE,
		(xdrproc_t) xdr_article_list, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

int *
list_all_brand_1(list_brand *argp, CLIENT *clnt)
{
	static int clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, LIST_ALL_BRAND,
		(xdrproc_t) xdr_list_brand, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

list_brand *
add_brand_1(list_brand *argp, CLIENT *clnt)
{
	static list_brand clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, ADD_BRAND,
		(xdrproc_t) xdr_list_brand, (caddr_t) argp,
		(xdrproc_t) xdr_list_brand, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

list_brand *
delete_brand_1(list_brand *argp, CLIENT *clnt)
{
	static list_brand clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, DELETE_BRAND,
		(xdrproc_t) xdr_list_brand, (caddr_t) argp,
		(xdrproc_t) xdr_list_brand, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

list_brand *
update_brand_1(list_brand *argp, CLIENT *clnt)
{
	static list_brand clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, UPDATE_BRAND,
		(xdrproc_t) xdr_list_brand, (caddr_t) argp,
		(xdrproc_t) xdr_list_brand, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

cart *
add_to_cart_1(cart *argp, CLIENT *clnt)
{
	static cart clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, ADD_TO_CART,
		(xdrproc_t) xdr_cart, (caddr_t) argp,
		(xdrproc_t) xdr_cart, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

cart *
rent_1(cart *argp, CLIENT *clnt)
{
	static cart clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, RENT,
		(xdrproc_t) xdr_cart, (caddr_t) argp,
		(xdrproc_t) xdr_cart, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

cart *
remove_from_cart_1(cart *argp, CLIENT *clnt)
{
	static cart clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, REMOVE_FROM_CART,
		(xdrproc_t) xdr_cart, (caddr_t) argp,
		(xdrproc_t) xdr_cart, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}