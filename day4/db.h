#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX_DATA 512
#define MAX_ROWS 100

struct Address {
	int id;
	int set;
	//char name[MAX_DATA];
	//char email[MAX_DATA];
	char *name;
	char *email;
};

struct Database {
	//struct Address rows[MAX_ROWS];
	struct Address *rows;
};

struct Connection {
	FILE *file;
	struct Database *db;
};

void die(const char *message);
void Address_print(struct Address *addr);
void Database_load(struct Connection *conn);
struct Connection *Database_open(const char *filename, char mode,
		int max_rows, int max_data);
void Database_close(struct Connection *conn);
void Database_write(struct Connection *conn);
void Database_create(struct Connection *conn);
void Database_set(struct Connection *conn,
		int id, const char *name, const char *email);
void Database_get(struct Connection *conn, int id);
void Database_list(struct Connection *conn);
void Database_delete(struct Connection *conn, int id);
