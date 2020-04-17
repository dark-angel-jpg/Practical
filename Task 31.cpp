#include <iostream>
using namespace std;
std::string maze[25] = {
"####B######################", //25_27
"# #       #   #      #    #",
"# # # ###### #### ####### #",
"# # # #       #   #       #",
"#   # # ######### # ##### #",
"# # # #   #       #     # #",
"### ### ### ############# #",
"# #   #     # #           #",
"# # #   ####### ###########",
"# # # #       # #         C",
"# # ##### ### # # ####### #",
"# # #     ### # #       # #",
"#   ##### ### # ######### #",
"######### ### #           #",
"# ####### ### #############",
"A           #   ###   #   #",
"# ############# ### # # # #",
"# ###       # # ### # # # #",
"# ######### # # ### # # # F",
"#       ### # #     # # # #",
"# ######### # ##### # # # #",
"# #######   #       #   # #",
"# ####### ######### #######",
"#         #########       #",
"#######E############D######"
};

bool f=0;

void w(int y,int x){
     if((x>=27)||(y>=25)||(x<0)||(y<0)||(maze[y][x]=='#')) return;
     else{
        if(maze[y][x] != ' '){
         std::cout<<maze[y][x];
         f=true;
     }
     maze[y][x]='#';
     w(y+1,x);
     w(y-1,x);
     w(y,x+1);
     w(y,x-1);
     }
}

int main()
{
    int x, y;
    std::cin>>x>>y;
        if((x>=27)||(y>=25)||(x<0)||(y<0)||(maze[y][x]=='#')) std::cout<<"Invalid coordinates";
        else {
        w(y,x);
        if(f!=1) std::cout<<"Exit not found";
    }

    return 0;
}