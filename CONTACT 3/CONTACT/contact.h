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
	PeoInfo *data;//数据
	int sz;//有效个数
	int capacity;//当前容量
}Contact;
//增容
void check_capacity(Contact* pc);
//初始化通讯录
void init_contact(Contact *pc);

//销毁通讯录
void destroy_contact(Contact* pc);

//增加信息
void add_contact(Contact *pc);
//删除信息
void del_contact(Contact *pc);
//查找信息
void search_contact(Contact *pc);
//修改信息
void modify_contact(Contact *pc);

//排序
void sort_contact(Contact *pc);
//显示通讯录
void show_contact(Contact *pc);
//清空通讯录
void empty_contact(Contact *pc);
//保存通讯录到文件
void save_contact(Contact *pc);
//加载通讯录
void load_contact(Contact* pc);