#include<stdio.h>
#include<mysql.h>
int main()
{
	MYSQL *conn;
	MYSQL_RES *res;
	MYSQL_ROW row;

	char *server = "localhost";
	char *user = "root";
	char *password = "23-Apr-2001";
	char *database = "msc";

	conn = mysql_init(NULL);
	if(!mysql_real_connect(conn,server,user,password,database,0,NULL,0))
	{
		fprintf(stderr,"%s\n",mysql_error(conn));
		exit;
	}
	if(mysql_query(conn, "show tables"))
	{
		fprintf(stderr,"%s\n",mysql_error(conn));
		exit;
	}
	res = mysql_use_result(conn);
	while((row = mysql_fetch_row(res)) != NULL)
	{
		printf("%s\n",row[0]);
	}
	mysql_free_result(res);
	mysql_close(conn);
}
