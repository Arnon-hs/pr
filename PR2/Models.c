struct Type_item
{
	char Date[12];
	char TimeStart[6];
	char TimeEnd[6];
	char Aud[11];
	char Teacher[27];
	struct Type_item *next;
};
struct Type_head
{
	struct Type_item *first;
	int count;
};