#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<"\t\t\t\t\t\t\tGame By AarDG10"<<endl;
    cout<<"\t\t\t\t\t\t\t***************"<<endl;
    int check=0;
    int sett=0;
    int flag=0;
    char arr[10][10]={'.'};
    while(flag!=9)
    {
        if(flag==0)cout<<"NOTE:Player 1 will be assigned 'O' and Player 2 will be assigned 'X'"<<endl;
        int x,y;
        cout<<"Enter Co-ordinate in Range [1,1]->[3,3]: "<<endl;
        cin>>x>>y;
        if(x>3 || x<1 || y>3 || y<1) cout<<"Error!--Enter Coordinates in Range [1,1]->[3,3]"<<endl;  //Error Handling
        else
        {
            if(arr[x][y]!=0) cout<<"Disallowed--Player Replay!"<<endl;
            else
            {
                if(sett)
                {
                    arr[x][y]='X'; //assigning char in a matrix
                    sett=0;
                }
                else
                {
                    arr[x][y]='O';
                    sett=1;
                }
                flag++;
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(arr[i+1][j+1]=='X') cout<<"X "; //displaying latest matrix
                else if(arr[i+1][j+1]=='O')cout<<"O ";
                else cout<<". ";
            }
            cout<<endl;
        }
        int p=1,k=1;
        if(arr[p][k]==arr[p+1][k+1] && arr[p+1][k+1]==arr[p+2][k+2] && arr[p+2][k+2]=='X' || arr[p][k]==arr[p+1][k+1] && arr[p+1][k+1]==arr[p+2][k+2] && arr[p+2][k+2]=='O')
        {
            cout<<"GAME OVER!"<<endl;
            if(arr[p][k]=='X') cout<<"Player 2 Wins!"<<endl;
            else cout<<"Player 1 Wins!"<<endl;
            check=1;
            break;
        }
        else
        {
            int j=0;
            int x=0,o=0;
            for(int i=0;i<3;i++)
            {
                x=0,o=0;
                for(j=0;j<3;j++)
                {
                    if(arr[i+1][j+1]=='X') x++;
                    else if(arr[i+1][j+1]=='O') o++;
                }
                if(x==3 || o==3)
                {
                    cout<<"GAME OVER!"<<endl;
                    if(arr[i][j]=='X') cout<<"\nPlayer 2 Wins!"<<endl;
                    else cout<<"\nPlayer 1 Wins!"<<endl;
                    check=1;
                    break;
                }
            }
            int i=0;
            for(j=0;j<3;j++)
            {
                x=0,o=0;
                for(i=0;i<3;i++)
                {
                    if(arr[i+1][j+1]=='X') x++;
                    else if(arr[i+1][j+1]=='O') o++;
                }
                if(x==3 || o==3)
                {
                    cout<<"GAME OVER!"<<endl;
                    if(arr[i][j]=='X') cout<<"\nPlayer 2 Wins!"<<endl;
                    else cout<<"\nPlayer 1 Wins!"<<endl;
                    check=1;
                    break;
                }
            }
        }
    }
    if(!check) cout<<"\nDRAW"<<endl;
return 0;
}