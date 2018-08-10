#include <stdio.h>
#include "db.h"

int get_data(void)
{
	int max_data;
	puts("Please input max data:");
	scanf("%d", &max_data);
	return max_data;
}

int get_rows(void)
{
	int max_rows;
	puts("Please input max rows:");
	scanf("%d", &max_rows);
	return max_rows;
}

int main(int argc, char *argv[])
{
	if (argc < 3) die("USAGE: ex17 <dbfil> <action> [action params]");

	int max_rows = get_rows();
	int max_data = get_data();
	char *filename = argv[1];
	char action = argv[2][0];


	struct Connection *conn = Database_open(filename, action,
			max_rows, max_data);
	int id = 0;

	if (argc > 3) id = atoi(argv[3]);
	if (id >= MAX_ROWS) die("There's not that many records.");

	switch(action) {
		case 'c':
			Database_create(conn);
			Database_write(conn);
			break;
			
		case 'g':
			if (argc != 4) die("Nead an id to get");

			Database_get(conn, id);
			break;

		case 's':
			if (argc != 6) die("Need id, name. email to set");

			Database_set(conn, id, argv[4], argv[5]);
			Database_write(conn);
			break;

		case 'd':
			if (argc != 4) die("Need id to delete");

			Database_delete(conn, id);
			Database_write(conn);
			break;

		case 'l':
			Database_list(conn);
			break;
		default:
			die("Invalid action, only: c = create, g = get, s = set, d = del, l = list");
	}

	Database_close(conn);

	return 0;
}


