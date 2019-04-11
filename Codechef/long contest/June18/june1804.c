#include<stdio.h>
#include<math.h>
int main()
{
    int t,px,py,pz,qx,qy,qz,dx,dy,dz,cx,cy,cz,r;
    double time,bx,by,bz,ax,ay,az,gx,gy,gz,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        fflush(stdin);
        //      0  1 2  3  4  5  6   7 8  9  10 11 12
        scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d",&px,&py,&pz,&qx,&qy,&qz,&dx,&dy,&dz,&cx,&cy,&cz,&r);
        ax = qx - px ;
        ay = qy - py ;
        az = qz - pz ;
        bx = px - cx ;
        by = py - cy ;
        bz = pz - cz ;
        gx = by*by + bz*bz - r*r ;
        gy = bx*bx + bz*bz - r*r ;
        gz = bx*bx + by*by - r*r ;
        a = 2*dx*dy*bx*by+2*dy*dz*by*bz+2*dz*dx*bz*bx - ax*ax * gx - ay*ay*gy - az*az*gz ;
        b =2*(ax*bx*by*dy+ax*bx*bz*dz+ay*bx*by*dx+ay*bx*bz*dz+az*by*bz*dy+az*bx*bz*dx);
        c = 2*ax*ay*bx*by +2*ay*az*by*bz+2*az*ax*bx*bz-ax*ax*gx-ay*ay*gy-az*az*gz;
        printf("%lf\n",(-b+ sqrt(b*b-4*a*c) )/(2*a));
    }
}