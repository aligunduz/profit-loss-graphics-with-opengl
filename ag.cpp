#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <GL/glut.h>

float t,a1,b1,c1,a2,b2,c2,a3,b3,c3,x1,y1,x2,y2,x3,y3,xmin,ymin,k1,k2,l1,l2,m1,m2,x,y,toplamk,toplaml,toplamm,z1,z2,cevap;

void myDisplay()
{
	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f (1,1,1);
	glBegin(GL_LINES);
		glVertex2f (-0.9,0.0);
		glVertex2f (0.9,0.0);
	glEnd();
		
	
	glBegin(GL_LINES);
		glVertex2f (0.0,0.9);
		glVertex2f (0.0,-0.9);
	glEnd();
	
	
	glBegin(GL_LINES);
		glVertex2f (x1/10,0.0);
		glVertex2f (0.0,y1/10);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f (x2/10,0.0);
		glVertex2f (0.0,y2/10);
	glEnd();
		glBegin(GL_LINES);
		glVertex2f (x3/10,0.0);
		glVertex2f (0.0,y3/10);
		glEnd();
	
	
	glBegin(GL_POLYGON);
		glVertex2f (0.0,0.0);
		glVertex2f (xmin/10,0.0);
		if(x>0 &&y>0){
			glVertex2f (x/10,y/10);
		}
		
		glVertex2f (0.0,ymin/10);
		
		
	glEnd();
	
	glFlush();
}


int main (int argc, char ** argv)
{
	
	printf("lutfen denklemlerin katsayi degerlerini giriniz.\n");
	printf("Z denklemi x1 icin:");
	scanf("%f",&z1);
	printf("\nZ denklemi x2 icin:");
	scanf("%f",&z2);
	printf("\n z denklemi icin min(0) mi max(1) mi?:");
	scanf("%f",&cevap);
	printf("\nBirinci denklem x1 icin:");
	scanf("%f",&a1);
	printf("\nBirinci denklem x2 icin:");
	scanf("%f",&b1);
	printf("\nBirinci denklem z icin:");
	scanf("%f",&c1);
	printf("\nIkinci denklem x1 icin:");
	scanf("%f",&a2);
	printf("\nIkinci denklem x2 icin:");
	scanf("%f",&b2);
	printf("\nIkinci denklem z icin:");
	scanf("%f",&c2);
	printf("\nUcuncu denklem x1 icin:");
	scanf("%f",&a3);
	printf("\nUcuncu denklem x2 icin:");
	scanf("%f",&b3);
	printf("\nUcuncu denklem z icin:");
	scanf("%f",&c3);
	
	if(a1 != 0){
		t=c1/a1;
		x1=t;	
	}else{
		x1=99999999999;
	}
	if(b1 != 0){
		t=c1/b1;
		y1=t;	
	}else{
		y1=99999999999;
	}if(a2 != 0){
		t=c2/a2;
		x2=t;	
	}else{
		x2=99999999999;
	}if(b2 != 0){
		t=c2/b2;
		y2=t;	
	}else{
		y2=99999999999;
	}
	
	if(a3==0 && b3==0 && c3==0){
		c3=999;
		a3=3;
		b3=3;
	}
	if(a3 != 0){
		t=c3/a3;
		x3=t;	
	}else{
		x3=99999999999;
	}if(b3 != 0){
		t=c3/b3;
		y3=t;	
	}else{
		y3=99999999999;
	}	

	
	
	
	if(x1<=x2 && x1<=x3 && a1 != 0 &&c1!=0)
		xmin=x1;
	else if(x3<=x2 && a3 != 0 &&c3!=0)
		xmin=x3;
	else if(x2<=x3 && a2!=0 && c2!=0)
		xmin=x2;
	if(y1<=y2 && y1<=y3 && b1!=0 &&c1!=0)
		ymin=y1;
	else if(y2<=y3 && b2 !=0 && c2!=0)
		ymin=y2;
	else if(y3<=y2 && b3 !=0 &&c3!=0) 
		ymin=y3;
	
	if(xmin==x1){
		if(x1==x2){
			if(y1<y2){
				k1=x1;
				l1=y1;
				m1=c1;
			}
			else if(y2<y1){
				k1=x2;
				l1=y2;
				m1=c2;
			}
		}
		else if(x1==x3){
			if(y1<y3){
				k1=x1;
				l1=y1;
				m1=c1;
			}
			else if(y3<y1){
				k1=x3;
				l1=y3;
				m1=c3;
			}
		}
		else if(x1==x2==x3){
			if(ymin==y1){
				k1=x1;
				l1=y1;
				m1=c1;
			}
			else if(ymin==y2){
				k1=x2;
				l1=y2;
				m1=c2;
			}
			else if(ymin==y3){
				k1=x3;
				l1=y3;
				m1=c3;
			}
		}
		else{
			k1=x1;
			l1=y1;
			m1=c1;
		}
	}
	else if(xmin==x2){
		if(x1==x2){
			if(y1<y2){
				k1=x1;
				l1=y1;
				m1=c1;
			}
			else if(y2<y1){
				k1=x2;
				l1=y2;
				m1=c2;
			}
		}
		else if(x2==x3){
			if(y2<y3){
				k1=x2;
				l1=y2;
				m1=c2;
			}
			else if(y3<y2){
				k1=x3;
				l1=y3;
				m1=c3;
			}
		}
		else if(x1==x2==x3){
			if(ymin==y1){
				k1=x1;
				l1=y1;
				m1=c1;
			}
			else if(ymin==y2){
				k1=x2;
				l1=y2;
				m1=c2;
			}
			else if(ymin==y3){
				k1=x3;
				l1=y3;
				m1=c3;
			}
		}
		else{
			k1=x2;
			l1=y2;
			m1=c2;
		}
	}
	else{
		if(x3==x2){
			if(y3<y2){
				k1=x3;
				l1=y3;
				m1=c3;
			}
			else if(y2<y3){
				k1=x2;
				l1=y2;
				m1=c2;
			}
		}
		else if(x1==x3){
			if(y1<y3){
				k1=x1;
				l1=y1;
				m1=c1;
			}
			else if(y3<y1){
				k1=x3;
				l1=y3;
				m1=c3;
			}
		}
		else if(x1==x2==x3){
			if(ymin==y1){
				k1=x1;
				l1=y1;
				m1=c1;
			}
			else if(ymin==y2){
				k1=x2;
				l1=y2;
				m1=c2;
			}
			else if(ymin==y3){
				k1=x3;
				l1=y3;
				m1=c3;
			}
		}
		else{
			k1=x3;
			l1=y3;
			m1=c3;
		}
	}
	
	
	
	
	if(ymin==y1){
		if(y1==y2){
			if(x1<x2){
				k2=x1;
				l2=y1;
				m2=c1;
			}
			else if(x2<x1){
				k2=x2;
				l2=y2;
				m2=c2;
			}
		}
		else if(y1==y3){
			if(x1<x3){
				k2=x1;
				l2=y1;
				m2=c1;
			}
			else if(x3<x1){
				k2=x3;
				l2=y3;
				m2=c3;
			}
		}
		else if(y1==y2==y3){
			if(xmin==x1){
				k2=x1;
				l2=y1;
				m2=c1;
			}
			else if(xmin==x2){
				k2=x2;
				l2=y2;
				m2=c2;
			}
			else if(xmin==x3){
				k2=x3;
				l2=y3;
				m2=c3;
			}
		}
		else{
			k2=x1;
			l2=y1;
			m2=c1;
		}
	}
	else if(ymin==y2){
		if(y1==y2){
			if(x1<x2){
				k2=x1;
				l2=y1;
				m2=c1;
			}
			else if(x2<x1){
				k2=x2;
				l2=y2;
				m2=c2;
			}
		}
		else if(y2==y3){
			if(x2<x3){
				k2=x2;
				l2=y2;
				m2=c2;
			}
			else if(x3<x2){
				k2=x3;
				l2=y3;
				m2=c3;
			}
		}
		else if(y1==y2==y3){
			if(xmin==x1){
				k2=x1;
				l2=y1;
				m2=c1;
			}
			else if(xmin==x2){
				k2=x2;
				l2=y2;
				m2=c2;
			}
			else if(xmin==x3){
				k2=x3;
				l2=y3;
				m2=c3;
			}
		}
		else{
			k2=x2;
			l2=y2;
			m2=c2;
		}
	}
	else{
		if(y3==y2){
			if(x3<x2){
				k2=x3;
				l2=y3;
				m2=c3;
			}
			else if(x2<x3){
				k2=x2;
				l2=y2;
				m2=c2;
			}
		}
		else if(y1==y3){
			if(x1<x3){
				k2=x1;
				l2=y1;
				m2=c1;
			}
			else if(x3<x1){
				k2=x3;
				l2=y3;
				m2=c3;
			}
		}
		else if(y1==y2==y3){
			if(xmin==x1){
				k2=x1;
				l2=y1;
				m2=c1;
			}
			else if(xmin==x2){
				k2=x2;
				l2=y2;
				m2=c2;
			}
			else if(xmin==x3){
				k2=x3;
				l2=y3;
				m2=c3;
			}
		}
		else{
			k2=x3;
			l2=y3;
			m2=c3;
		}
	}
	t=(-(l1-l2)*(k1))/((-l1)*(k2)-(-l2)*(k1));
	x=k2*t;
	y=l2+(-l2)*t;
	printf("Tarali bolgenin kose noktalari:\n{0,0}\n{0,%.2lf}\n{%.2lf,0}\n{%.2lf,%.2lf}",ymin,xmin,x,y);
	
	
	if(cevap==1){
		t=ymin*z2;
	if(xmin*z1>t){
		t=xmin*z1;
	}else if(x*z1+y*z2>t){
		t=x*z1+y*z2;
	}
	printf("\nMaximum deger:%f",t);
	}else{
		t=0.0;
	printf("\nMinimum deger:%f",t);
	}
	
	glutInit (&argc,argv);
	glutCreateWindow("ag'");
	glutDisplayFunc(myDisplay);
	glutMainLoop();
	return(0);
}

