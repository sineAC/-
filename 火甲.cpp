#include <stdio.h>
#include <Windows.h>
int main()
{
	printf("�������ֻ��ABCDE����������ܣ�12345��������Խ�һ�ֻ���ŵ�һ�������ϣ�\n��Ϊ�������õ��ۣ�123456789�������������1234567��");
	Sleep(800);
	printf("\n������\n2 3 4\n����ʽ���룬\n��ʾ�㽫X���������2�Ż����ϣ�����3Ԫ������4��\n");
	char n1, n2, n3, n4, n5;
	n1 = 'A';
	n2 = 'B';
	n3 = 'C';
	n4 = 'D';
	n5 = 'E';
	int l1=100, l2=100, l3=100, l4=100, l5 = 100;
	int p1 = 199, p2 = 199, p3 = 199, p4 = 199, p5 = 199;
	int q1 = 174, q2 = 174, q3 = 174, q4 = 174, q5 = 174;
	Sleep(1500);
	printf("\n�Ƿ�ڳ�A�����������Y������������N\n");
	char a1;
	a1 = 'N';
	scanf("%c", &a1);
	getchar();
	if (a1 == 'Y')
	{
		while (1)
		{
			printf("���������ָ�\n");
			scanf_s("%d %d %d", &l1, &p1, &q1);
			getchar();
			if (l1 >= 1 && l1 <= 5 && p1 >= 1 && p1 <= 9 && q1 >= 1 && q1 <= 7)
			{
				printf("\n�㽫A�������");
				printf("%d ", l1);
				printf("�Ż����ϣ�����");
				printf("%d ", q1);
				printf("�����������˵���Ϊ");
				printf("%d ", p1);
				printf("Ԫ\n\n");
				break;
			}
			else
			{
				printf("\n��������ȷ��ʽ��ָ��\n");
			}
		}
	}
	Sleep(600);
	printf("\n�Ƿ�ڳ�B�����������Y������������N\n");
	char a2 = 'N';
	scanf("%c", &a2);
	getchar();
	if (a2 == 'Y')
	{
		while (1)
		{
			printf("���������ָ�\n");
			scanf_s("%d %d %d", &l2, &p2, &q2);
			getchar();
			if (l2 == l1)
			{
				printf("�û����Ѿ��л����ˣ���һ����~��~\n");
			}
			else if (l2 >= 1 && l2 <= 5 && p2 >= 1 && p2 <= 9 && q2 >= 1 && q2 <= 7 && l2 != l1)
			{
				printf("\n�㽫");
				printf("%c ", n2);
				printf("����");
				printf("%d ", l2);
				printf("�Ż����ϣ�����");
				printf("%d ", q2);
				printf("�����������˵���Ϊ");
				printf("%d ", p2);
				printf("Ԫ\n\n");
				break;
			}
			else
			{
				printf("\n��������ȷ��ʽ��ָ��\n");
			}
		}
	}
	Sleep(600);
	printf("\n�Ƿ�ڳ�C�����������Y������������N\n");
	char a3 = 'N';
	scanf("%c", &a3);
	getchar();
	if (a3 == 'Y')
	{
		while (1)
		{
			printf("���������ָ�\n");
			scanf_s("%d %d %d", &l3, &p3, &q3);
			getchar();
			if (l3 == l1 || l3 == l2)
			{
				printf("�û����Ѿ��л����ˣ���һ����0.o\n");
			}
			else if (l3 >= 1 && l3 <= 5 && p3 >= 1 && p3 <= 9 && q3 >= 1 && q3 <= 7 && l3 != l1 && l3 != l2)
			{
				printf("\n�㽫");
				printf("%c ", n3);
				printf("����");
				printf("%d ", l3);
				printf("�Ż����ϣ�����");
				printf("%d ", q3);
				printf("�����������˵���Ϊ");
				printf("%d ", p3);
				printf("Ԫ\n\n");
				break;
			}
			else
			{
				printf("\n��������ȷ��ʽ��ָ��\n");
			}
		}
	}
	Sleep(600);
	printf("\n�Ƿ�ڳ�D�����������Y������������N\n");
	char a4 = 'N';
	scanf("%c", &a4);
	getchar();
	if (a4 == 'Y')
	{
		while (1)
		{
			printf("���������ָ�\n");
			scanf_s("%d %d %d", &l4, &p4, &q4);
			getchar();
			if (l4 == l1 || l4 == l2 || l4 == l3)
			{
				printf("�û����Ѿ��л����ˣ���һ����:-(");
			}
			else if (l4 >= 1 && l4 <= 5 && p4 >= 1 && p4 <= 9 && q4 >= 1 && q4 <= 7 && l4 != l1 && l4 != l2 && l4 != l3)
			{
				printf("\n�㽫");
				printf("%c ", n4);
				printf("����");
				printf("%d ", l4);
				printf("�Ż����ϣ�����");
				printf("%d ", q4);
				printf("�����������˵���Ϊ");
				printf("%d ", p4);
				printf("Ԫ\n\n");
				break;
			}
			else
			{
				printf("\n��������ȷ��ʽ��ָ��\n");
			}
		}
	}
	Sleep(600);
	printf("\n�Ƿ�ڳ�E�����������Y������������N\n");
	char a5 = 'N';
	scanf("%c", &a5);
	getchar();
	if (a5 == 'Y')
	{
		while (1)
		{
			printf("���������ָ�\n");
			scanf_s("%d %d %d", &l5, &p5, &q5);
			getchar();
			if (l5 == l1 || l5 == l2 || l5 == l3 || l5 == l4)
			{
				printf("�û����Ѿ��л����ˣ���һ����*_*\n");
			}
			else if (n5 >= 'A' && n5 <= 'E' && l5 >= 1 && l5 <= 5 && p5 >= 1 && p5 <= 9 && q5 >= 1 && q5 <= 7 && n5 != n1 && l5 != l1 && n5 != n2 && l5 != l2 && n5 != n3 && l5 != l3 && n5 != n4 && l5 != l4)
			{
				printf("\n�㽫");
				printf("%c ", n5);
				printf("����");
				printf("%d ", l5);
				printf("�Ż����ϣ�����");
				printf("%d ", q5);
				printf("�����������˵���Ϊ");
				printf("%d ", p5);
				printf("Ԫ\n\n");
				break;
			}
			else
			{
				printf("\n��������ȷ��ʽ��ָ��\n");
			}
		}
	}
	printf("���ѷźû���\n\n");
	Sleep(1600);
	if (a1 == 'Y')
	{
		printf("A�����");
		printf("%d", (int)l1);
		printf("�Ż����ϣ�����");
		printf("%d", (int)p1);
		printf("Ԫ����");
		printf("%d", (int)q1);
		printf("��\n");
	}
	if (a2 == 'Y')
	{
		printf("B�����");
		printf("%d", (int)l2);
		printf("�Ż����ϣ�����");
		printf("%d", (int)p2);
		printf("Ԫ����");
		printf("%d", (int)q2);
		printf("��\n");
	}
	if (a3 == 'Y')
	{
		printf("C�����");
		printf("%d", (int)l3);
		printf("�Ż����ϣ�����");
		printf("%d", (int)p3);
		printf("Ԫ����");
		printf("%d", (int)q3);
		printf("��\n");
	}
	if (a4 == 'Y')
	{
		printf("D�����");
		printf("%d", (int)l4);
		printf("�Ż����ϣ�����");
		printf("%d", (int)p4);
		printf("Ԫ����");
		printf("%d", (int)q4);
		printf("��\n");
	}
	if (a5 == 'Y')
	{
		printf("E�����");
		printf("%d", (int)l5);
		printf("�Ż����ϣ�����");
		printf("%d", (int)p5);
		printf("Ԫ����");
		printf("%d", (int)q5);
		printf("��\n");
	}
	Sleep(800);
	char a6, a7, a8;
	char g;
	int b=1999;
	int c=1999;
	int pay=0;
	char a10='N';
	int mm=1999;
	while (1)
	{
		if (a1 == 'Y' || a2 == 'Y' || a3 == 'Y' || a4 == 'Y' || a5 == 'Y')
		{
			printf("\n����1��ʼ����\n");
			scanf("%c", &a6);
			getchar();
			Sleep(1200);
			printf("waiting....");
			Sleep(3200);
		}
		if (a1 != 'Y' && a2 != 'Y' && a3 != 'Y' && a4 != 'Y' && a5 != 'Y')
		{
			Sleep(800);
			printf("û�л����ϼܣ����첻Ӫҵ");
			Sleep(800);
			exit(0);
		}
		while (1)
		{
			printf("\n\n���˹˿ͣ���ӭ����\n");
			Sleep(600);
			printf("\n������\n");
			if (a1 == 'Y')
			{
				printf("A�����");
				printf("%d", (int)l1);
				printf("�Ż����ϣ�����");
				printf("%d", (int)p1);
				printf("Ԫ����");
				printf("%d", (int)q1);
				printf("��\n");
			}
			if (a2 == 'Y')
			{
				printf("B�����");
				printf("%d", (int)l2);
				printf("�Ż����ϣ�����");
				printf("%d", (int)p2);
				printf("Ԫ����");
				printf("%d", (int)q2);
				printf("��\n");
			}
			if (a3 == 'Y')
			{
				printf("C�����");
				printf("%d", (int)l3);
				printf("�Ż����ϣ�����");
				printf("%d", (int)p3);
				printf("Ԫ����");
				printf("%d", (int)q3);
				printf("��\n");
			}
			if (a4 == 'Y')
			{
				printf("D�����");
				printf("%d", (int)l4);
				printf("�Ż����ϣ�����");
				printf("%d", (int)p4);
				printf("Ԫ����");
				printf("%d", (int)q4);
				printf("��\n");
			}
			if (a5 == 'Y')
			{
				printf("E�����");
				printf("%d", (int)l5);
				printf("�Ż����ϣ�����");
				printf("%d", (int)p5);
				printf("Ԫ����");
				printf("%d", (int)q5);
				printf("��\n");
			}
			Sleep(600);
			while (1)
			{
				printf("\n�������Ƿ��빺��Щʲô��\n");
				printf("���밴Y�����빺���밴N\n");
				scanf("%c", &a7);
				getchar();
				printf("%c", a7);
				Sleep(750);
				if (a7 != 'Y')
				{
					printf("��ӭ�´���������~~");
					break;
				}
				if (a7 == 'Y')
				{
					printf("\n����Ȼ�������ʲô\n\n");
					Sleep(600);
					printf("��\nA 2\n��ʽ���룬��ʾ��Ҫ������A��\n\n\n");
					Sleep(800);
					while (1)
					{
						printf("�˿�������������Ļ���ͼ���\n");
						printf("����������ָ�\n");
						scanf("%c %d", &g, &b);
						getchar();
						if (g == 'A' && a1 != 'Y')
						{
							Sleep(600);
							printf("���ڲ����۸���Ʒ�أ���ѡ��һ�°�\n");
							Sleep(540);
						}
						else if (g == 'B' && a2 != 'Y')
						{
							Sleep(600);
							printf("���ڲ����۸���Ʒ�أ���ѡ��һ�°�\n");
							Sleep(540);
						}
						else if (g == 'C' && a3 != 'Y')
						{
							Sleep(600);
							printf("���ڲ����۸���Ʒ�أ���ѡ��һ�°�\n");
							Sleep(540);
						}
						else if (g == 'D' && a4 != 'Y')
						{
							Sleep(600);
							printf("���ڲ����۸���Ʒ�أ���ѡ��һ�°�\n");
							Sleep(540);
						}
						else if (g == 'E' && a5 != 'Y')
						{
							Sleep(600);
							printf("���ڲ����۸���Ʒ�أ���ѡ��һ�°�\n");
							Sleep(540);
						}
						else if (g == 'A' && b > q1 && b < 1999 && a1 == 'Y')
						{
							printf("�Բ�������û����ô��A����\n");
							printf("���ٴ��������Ĺ���ѡ��\n");
						}
						else if (g == 'B' && b > q2 && b < 1999 && a2 == 'Y')
						{
							printf("�Բ�������û����ô��B����\n");
							printf("���ٴ��������Ĺ���ѡ��\n");
						}
						else if (g == 'C' && b > q3 && b < 1999 && a3 == 'Y')
						{
							printf("�Բ�������û����ô��C����\n");
							printf("���ٴ��������Ĺ���ѡ��\n");
						}
						else if (g == 'D' && b > q4 && b < 1999 && a4 == 'Y')
						{
							printf("�Բ�������û����ô��D����\n");
							printf("���ٴ��������Ĺ���ѡ��\n");
						}
						else if (g == 'E' && b > q5 && b < 1999 && a5 == 'Y')
						{
							printf("�Բ�������û����ô��E����\n");
							printf("���ٴ��������Ĺ���ѡ��\n");
						}
						else if (g == 'A' && b <= q1 && a1 == 'Y')
						{
							c = b * p1;
							printf("����֧��");
							printf("%d", (int)c);
							printf("Ԫ��������ѡ��Ͷ��1��2��5��10Ԫ\n");
							printf("��Ͷ�룺");
							while (1)
							{
								scanf_s("%d", &pay);
								getchar();
								if (pay != 1 && pay != 2 && pay != 5 && pay != 10)
								{
									printf("��Ǹ���ǲ���ȡ�����Ļ��ң����ٴ�Ͷ�룺\n");
								}
								else if (pay < c)
								{
									c = c - pay;
									printf("������֧��");
									printf("%d", (int)c);
									printf("Ԫ���ٴ�֧����\n");
								}
								else if (pay == c)
								{
									c = c - pay;
									printf("����ɹ���");
									c = c - c;
									mm = 1;
									break;
								}
								else if (pay > c)
								{
									c = pay - c;
									printf("����ɹ���\n");
									printf("����");
									printf("%d", (int)c);
									printf("Ԫ");
									c = c - c;
									mm = 1;
									printf("%d", mm);
									break;									
								}
							}
							q1 = q1 - b;
						}
						else if (g == 'B' && b <= q2 && a2 == 'Y')
						{
							c = b * p2;
							printf("����֧��");
							printf("%d", (int)c);
							printf("Ԫ��������ѡ��Ͷ��1��2��5��10Ԫ\n");
							printf("��Ͷ�룺");
							while (1)
							{
								scanf_s("%d", &pay);
								getchar();
								if (pay != 1 && pay != 2 && pay != 5 && pay != 10)
								{
									printf("��Ǹ���ǲ���ȡ�����Ļ��ң����ٴ�Ͷ�룺\n");
								}
								else if (pay < c)
								{
									c = c - pay;
									printf("������֧��");
									printf("%d", (int)c);
									printf("Ԫ���ٴ�֧����\n");
								}
								else if (pay == c)
								{
									c = c - pay;
									printf("����ɹ���");
									c = c - c;
									mm = 1;
									break;
								}
								else if (pay > c)
								{
									c = pay - c;
									printf("����ɹ���\n");
									printf("����");
									printf("%d", (int)c);
									printf("Ԫ");
									c = c - c;
									mm = 1;
									break;
								}
							}
							q2 = q2 - b;
						}
						else if (g == 'C' && b <= q3 && a3 == 'Y')
						{
							c = b * p3;
							printf("����֧��");
							printf("%d", (int)c);
							printf("Ԫ��������ѡ��Ͷ��1��2��5��10Ԫ\n");
							printf("��Ͷ�룺");
							while (1)
							{
								scanf_s("%d", &pay);
								getchar();
								if (pay != 1 && pay != 2 && pay != 5 && pay != 10)
								{
									printf("��Ǹ���ǲ���ȡ�����Ļ��ң����ٴ�Ͷ�룺\n");
								}
								else if (pay < c)
								{
									c = c - pay;
									printf("������֧��");
									printf("%d", (int)c);
									printf("Ԫ���ٴ�֧����\n");
								}
								else if (pay == c)
								{
									c = c - pay;
									printf("����ɹ���");
									c = c - c;
									mm = 1;
									break;
								}
								else if (pay > c)
								{
									c = pay - c;
									printf("����ɹ���\n");
									printf("����");
									printf("%d", (int)c);
									printf("Ԫ");
									c = c - c;
									mm = 1;
									break;
								}
							}
							q3 = q3 - b;
						}
						else if (g == 'D' && b <= q4 && a4 == 'Y')
						{
							c = b * p4;
							printf("����֧��");
							printf("%d", (int)c);
							printf("Ԫ��������ѡ��Ͷ��1��2��5��10Ԫ\n");
							printf("��Ͷ�룺");
							while (1)
							{
								scanf_s("%d", &pay);
								getchar();
								if (pay != 1 && pay != 2 && pay != 5 && pay != 10)
								{
									printf("��Ǹ���ǲ���ȡ�����Ļ��ң����ٴ�Ͷ�룺\n");
								}
								else if (pay < c)
								{
									c = c - pay;
									printf("������֧��");
									printf("%d", (int)c);
									printf("Ԫ���ٴ�֧����\n");
								}
								else if (pay == c)
								{
									c = c - pay;
									printf("����ɹ���");
									c = c - c;
									mm = 1;
									break;
								}
								else if (pay > c)
								{
									c = pay - c;
									printf("����ɹ���\n");
									printf("����");
									printf("%d", (int)c);
									printf("Ԫ");
									c = c - c;
									mm = 1;
									break;
								}
							}
							q4 = q4 - b;
						}
						else if (g == 'E' && b <= q5 && a5 == 'Y')
						{
							c = b * p5;
							printf("����֧��");
							printf("%d", (int)c);
							printf("Ԫ��������ѡ��Ͷ��1��2��5��10Ԫ\n");
							printf("��Ͷ�룺");
							while (1)
							{
								scanf_s("%d", &pay);
								getchar();
								if (pay != 1 && pay != 2 && pay != 5 && pay != 10)
								{
									printf("��Ǹ���ǲ���ȡ�����Ļ��ң����ٴ�Ͷ�룺\n");
								}
								else if (pay < c)
								{
									c = c - pay;
									printf("������֧��");
									printf("%d", (int)c);
									printf("Ԫ���ٴ�֧����\n");
								}
								else if (pay == c)
								{
									c = c - pay;
									printf("����ɹ���");
									c = c - c;
									mm = 1;
									break;
								}
								else if (pay > c)
								{
									c = pay - c;
									printf("����ɹ���\n");
									printf("����");
									printf("%d", (int)c);
									printf("Ԫ");
									c = c - c;
									mm = 1;
									break;
								}
							}
							q5 = q5 - b;
						}										
						else
						{
							printf("������ָ����ʽ��ָ�\n");
						}
						Sleep(800);
						printf("\n�������������ǣ�������Y����������������\n");
						scanf("%c", &a8);
						getchar();
						if (a8 == 'Y')
						{
							printf("���ڣ����ǻ��У�\n\n");
							if (a1 == 'Y')
							{
								printf("A�����");
								printf("%d", (int)l1);
								printf("�Ż����ϣ�����");
								printf("%d", (int)p1);
								printf("Ԫ����");
								printf("%d", (int)q1);
								printf("��\n");
							}
							if (a2 == 'Y')
							{
								printf("B�����");
								printf("%d", (int)l2);
								printf("�Ż����ϣ�����");
								printf("%d", (int)p2);
								printf("Ԫ����");
								printf("%d", (int)q2);
								printf("��\n");
							}
							if (a3 == 'Y')
							{
								printf("C�����");
								printf("%d", (int)l3);
								printf("�Ż����ϣ�����");
								printf("%d", (int)p3);
								printf("Ԫ����");
								printf("%d", (int)q3);
								printf("��\n");
							}
							if (a4 == 'Y')
							{
								printf("D�����");
								printf("%d", (int)l4);
								printf("�Ż����ϣ�����");
								printf("%d", (int)p4);
								printf("Ԫ����");
								printf("%d", (int)q4);
								printf("��\n");
							}
							if (a5 == 'Y')
							{
								printf("E�����");
								printf("%d", (int)l5);
								printf("�Ż����ϣ�����");
								printf("%d", (int)p5);
								printf("Ԫ����");
								printf("%d", (int)q5);
								printf("��\n");
							}
							printf("\n");
						}
						if (a8 != 'Y')
						{
							Sleep(800);
							printf("�������^v^");
							break;
						}				
					}
					if (a8 != 'Y')
					{
						break;
					}
				}
				if (a8 != 'Y')
				{
					break;
				}
			}
			if (a8 != 'Y')
			{
				break;
			}
		}
		printf("\n\n�Ƿ�������ͣ�   �ǣ�������Y�����ǣ������Ľ�����������\n");
		scanf("%c", &a10);
		getchar();
		if (a10 == 'Y')
		{
			printf("�������ͣ���\n");
			Sleep(1000);
		}
		else if (a10 != 'Y')
		{
			Sleep(600);
			printf("������Ҳ��׬�˲���Ǯ��");
			Sleep(800);
			break;
		}
	}
	return 0;
}
