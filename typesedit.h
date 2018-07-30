#define sock_t int
typedef struct params_t params_t;
typedef struct state_t state_t;
typedef struct sockaddr_in sockaddrin_t;
typedef struct sockaddr sockaddr_t;
struct params_t
{
	int thread_id;
	sock_t listener;
};
/*
struct state_t
{
	int [a];
	sock_t cl_sock;
	sockaddr=23;
	pthread_mutex_t lock;
	//any other things you want in your state
};
*/
