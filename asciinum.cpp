#include <cstdio>

using namespace std;

void solution(char* a)
{
    int res = 0; int cnt = 0;
    for(int i = 0; a[i]!= '\0';i++)
    {
        /*���ڿ��� ������ '\0' */

        if(48 <= a[i] && a[i]<= 57)
        {
            res = res*10 + (a[i]-48);
            /*�տ� 0�� �����ϸ鼭 ���ڸ��� ����� �ƽ�Ű �ڵ��̱⶧���� 48��ŭ ����  */
        }
    }
    printf("%d\n",res);

    for(int i = 1; i <= res; i++)
    {
        if(res%i == 0)
        {
            /*res�� ��� ���� ���ϱ� ����� ���� ���� */
            cnt++;
        }
    }
    printf("%d",cnt);
}

int main()
{
    freopen("input.txt","rt",stdin);
    /*���� ����� ��� */
    char a[50]; /*���ڿ� */
    scanf("%s",&a);  /*& �� �ٿ��� �� */
    solution(a);

    return 0;
}
