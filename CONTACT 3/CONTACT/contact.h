#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

#define DEFAULT_SZ 3
#define INC 2


#define  MAX_NAME  20
#define  MAX_TELE  12
#define  MAX_ADDR  100
#define  MAX_QQ    12
#define  MAX_SEX    5

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	char qq[MAX_QQ];
	char sex[MAX_SEX];
	short age;
}PeoInfo;

typedef struct Contact
{
	PeoInfo *data;//����
	int sz;//��Ч����
	int capacity;//��ǰ����
}Contact;
//����
void check_capacity(Contact* pc);
//��ʼ��ͨѶ¼
void init_contact(Contact *pc);

//����ͨѶ¼
void destroy_contact(Contact* pc);

//������Ϣ
void add_contact(Contact *pc);
//ɾ����Ϣ
void del_contact(Contact *pc);
//������Ϣ
void search_contact(Contact *pc);
//�޸���Ϣ
void modify_contact(Contact *pc);

//����
void sort_contact(Contact *pc);
//��ʾͨѶ¼
void show_contact(Contact *pc);
//���ͨѶ¼
void empty_contact(Contact *pc);
//����ͨѶ¼���ļ�
void save_contact(Contact *pc);
//����ͨѶ¼
void load_contact(Contact* pc);