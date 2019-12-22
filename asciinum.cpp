#include <cstdio>

using namespace std;

void solution(char* a)
{
    int res = 0; int cnt = 0;
    for(int i = 0; a[i]!= '\0';i++)
    {
        /*문자열의 끝에는 '\0' */

        if(48 <= a[i] && a[i]<= 57)
        {
            res = res*10 + (a[i]-48);
            /*앞에 0을 무시하면서 한자리씩 저장됨 아스키 코드이기때문에 48만큼 빼줌  */
        }
    }
    printf("%d\n",res);

    for(int i = 1; i <= res; i++)
    {
        if(res%i == 0)
        {
            /*res의 약수 개수 구하기 약수는 본인 포함 */
            cnt++;
        }
    }
    printf("%d",cnt);
}

int main()
{
    freopen("input.txt","rt",stdin);
    /*파일 입출력 사용 */
    char a[50]; /*문자열 */
    scanf("%s",&a);  /*& 안 붙여도 됨 */
    solution(a);

    return 0;
}
