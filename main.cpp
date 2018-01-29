#include <iostream>


using namespace std;

int main()
{
    int D, N, a, b, vertical, horizontal;

    cin>>D;

    for (int i=1; i<=D; i++)
    {
        cin>>N;
        vertical=0;
        horizontal=0;

        for(int j=1; j<=N; j++)
        {
            cin>>a>>b;

            switch (a)
            {
            case 0: vertical+=b;
            break;

            case 1: vertical-=b;
            break;

            case 2: horizontal+=b;
            break;

            case 3: horizontal-=b;
            break;
            }
        }
        if (vertical>0) cout<<0<<" "<<vertical<<endl;
        if (vertical<0) cout<<1<<" "<<vertical*-1<<endl;
        if (horizontal>0) cout<<2<<" "<<horizontal<<endl;
        if (horizontal<0) cout<<3<<" "<<horizontal*-1<<endl;
        if (horizontal==0&&vertical==0) cout<<"studnia"<<endl;
    }
    return 0;
}
