#include <iostream>
#include <windows.h>
#include <GL/glut.h>
#include <math.h>

#define PI 3.14

using namespace std;

float _angle = 30.0f;
float _cameraAngle = 0.0f;

void drawSky(void)
{
      glBegin(GL_QUADS);
      glColor3ub(224, 224, 224); //(166, 189, 219); // Maximum Green
      glVertex2i(0, 800);
      glVertex2i(1050, 800);
      glVertex2i(1050, 1000);
      glVertex2i(0, 1000);
      glEnd();
}

void drawSkyBottom(void)
{
      glBegin(GL_QUADS);
      glColor3ub(30, 86, 49); // Maximum Green
      glVertex2i(0, 800);
      glVertex2i(1050, 750);
      glVertex2i(1050, 900);
      glVertex2i(900, 860);
      glVertex2i(860, 820);
      glVertex2i(800, 870);
      glVertex2i(700, 870);
      glVertex2i(600, 820);
      glVertex2i(0, 840);
      glEnd();
}

void drawRiver(void)
{
      glBegin(GL_QUADS);
      glColor3ub(102, 178, 255);
      glVertex2i(0, 600);
      glVertex2i(1050, 600);
      glVertex2i(1050, 800);
      glVertex2i(0, 800);
      glEnd();
}

void drawBoatOne(void)
{
      // Part one
      glBegin(GL_POLYGON);
      glColor3ub(0, 0, 0);
      glVertex2i(50, 720);
      glVertex2i(120, 720);
      glVertex2i(130, 740);
      glVertex2i(40, 740);
      glEnd();

      // Part two
      glBegin(GL_POLYGON);
      glColor3ub(255, 255, 0);
      glVertex2i(60, 740);
      glVertex2i(110, 740);
      glVertex2i(90, 750);
      glVertex2i(80, 750);
      glEnd();

      // Part three
      glBegin(GL_QUADS);
      glColor3ub(213, 96, 5);
      glVertex2i(50, 740);
      glVertex2i(55, 740);
      glVertex2i(55, 780);
      glVertex2i(50, 780);
      glEnd();
}

void drawBoatTwo(void)
{
      // Part one
      glBegin(GL_POLYGON);
      glColor3ub(0, 0, 0);
      glVertex2i(850, 770);
      glVertex2i(920, 770);
      glVertex2i(930, 790);
      glVertex2i(840, 790);
      glEnd();

      // Part two
      glBegin(GL_POLYGON);
      glColor3ub(0, 0, 255);
      glVertex2i(860, 790);
      glVertex2i(910, 790);
      glVertex2i(890, 800);
      glVertex2i(880, 800);
      glEnd();

      // Part three
      glBegin(GL_QUADS);
      glColor3ub(213, 96, 5);
      glVertex2i(850, 790);
      glVertex2i(855, 790);
      glVertex2i(855, 830);
      glVertex2i(850, 830);
      glEnd();
}

void drawGrass(void)
{
      glBegin(GL_QUADS);
      glColor3ub(76, 154, 42); // Maximum Green
      glVertex2i(0, 220);
      glVertex2i(1050, 220);
      glVertex2i(1050, 600);
      glVertex2i(0, 600);
      glEnd();
}

void drawLandShades(void)
{
      //land shade 1
      glBegin(GL_POLYGON);
      glColor3ub(46, 139, 87); // Maximum Green
      glVertex2i(1050, 220);
      glVertex2i(1050, 320);
      glVertex2i(690, 220);
      glEnd();

      // land shade2
      glBegin(GL_POLYGON);
      glColor3ub(46, 224, 87); // Maximum Green
      glVertex2i(1050, 330);
      glVertex2i(0, 300);
      glVertex2i(0, 650);
      glVertex2i(1050, 380);
      glEnd();

      //land shade 3
      glBegin(GL_POLYGON);
      glColor3ub(0, 204, 102); // Maximum Green
      glVertex2i(1050, 620);
      glVertex2i(1050, 500);
      glVertex2i(500, 490);
      glVertex2i(500, 400);
      glEnd();
}

void drawRoads(void)
{
      //Road 1
      glBegin(GL_QUADS);
      glColor3ub(96, 106, 116); // Red
      glVertex2i(0, 10);
      glVertex2i(1050, 10);
      glVertex2i(1050, 200);
      glVertex2i(0, 200);
      glEnd();

      //Road 2
      glBegin(GL_POLYGON);
      glColor3ub(96, 106, 116);
      glVertex2i(520, 200);
      glVertex2i(690, 200);
      glVertex2i(480, 600);
      glVertex2i(370, 600);
      glEnd();

      //Road 3
      glBegin(GL_POLYGON);
      glColor3ub(96, 106, 116);
      glVertex2i(0, 600);
      glVertex2i(500, 530);
      glVertex2i(480, 605);
      glVertex2i(0, 630);
      glEnd();
}

void drawRoadSigns(void)
{
      //sign 1
      glBegin(GL_QUADS);         // Each set of 4 vertices form a quad
      glColor3ub(255, 255, 255); // Red
      glVertex2i(50, 100);
      glVertex2i(200, 100);
      glVertex2i(200, 110);
      glVertex2i(50, 110);
      glEnd();

      //sign 2
      glBegin(GL_QUADS);         // Each set of 4 vertices form a quad
      glColor3ub(255, 255, 255); // white
      glVertex2i(250, 100);
      glVertex2i(400, 100);
      glVertex2i(400, 110);
      glVertex2i(250, 110);
      glEnd();

      //sign 3
      glBegin(GL_QUADS);         // Each set of 4 vertices form a quad
      glColor3ub(255, 255, 255); // white
      glVertex2i(450, 100);
      glVertex2i(600, 100);
      glVertex2i(600, 110);
      glVertex2i(450, 110);
      glEnd();

      //sign 4
      glBegin(GL_QUADS);         // Each set of 4 vertices form a quad
      glColor3ub(255, 255, 255); // white
      glVertex2i(650, 100);
      glVertex2i(800, 100);
      glVertex2i(800, 110);
      glVertex2i(650, 110);
      glEnd();

      //sign 5
      glBegin(GL_QUADS);         // Each set of 4 vertices form a quad
      glColor3ub(255, 255, 255); // white
      glVertex2i(850, 100);
      glVertex2i(990, 100);
      glVertex2i(990, 110);
      glVertex2i(850, 110);
      glEnd();
}

void drawCarOne(void)
{
      glBegin(GL_QUADS);
      glColor3ub(255, 255, 204);
      glVertex2i(795, 50);
      glVertex2i(885, 50);
      glVertex2i(880, 80);
      glVertex2i(800, 80);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(240, 128, 128);
      glVertex2i(800, 80);
      glVertex2i(870, 80);
      glVertex2i(850, 110);
      glVertex2i(810, 110);
      //glVertex2i(720,100);
      glEnd();

      //wheel 1
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(1.0, 0, 1.0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 815;
            float y = r * sin(A) + 50;
            glVertex2f(x, y);
      }

      glEnd();

      //wheel 2
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(1.0, 0, 1.0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 865;
            float y = r * sin(A) + 50;
            glVertex2f(x, y);
      }

      glEnd();
}

void drawCarTwo(void)
{
      glBegin(GL_QUADS);
      glColor3ub(255, 255, 204);
      glVertex2i(95, 50);
      glVertex2i(185, 50);
      glVertex2i(180, 80);
      glVertex2i(100, 80);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(53, 153, 255);
      glVertex2i(100, 80);
      glVertex2i(170, 80);
      glVertex2i(150, 110);
      glVertex2i(110, 110);
      //glVertex2i(720,100);
      glEnd();
// wheel 1
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(1.0, 0, 1.0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 115;
            float y = r * sin(A) + 50;
            glVertex2f(x, y);
      }

      glEnd();
      //wheel 2
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(1.0, 0, 1.0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 165;
            float y = r * sin(A) + 50;
            glVertex2f(x, y);
      }

      glEnd();
}

void drawCarThree(void)
{
      glBegin(GL_QUADS);
      glColor3ub(255, 255, 204);
      glVertex2i(475, 150);
      glVertex2i(595, 150);
      glVertex2i(590, 180);
      glVertex2i(480, 180);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(153, 153, 255);
      glVertex2i(500, 180);
      glVertex2i(590, 180);
      glVertex2i(570, 210);
      glVertex2i(510, 210);
      //glVertex2i(720,100);
      glEnd();

      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(1.0, 0, 1.0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 505;
            float y = r * sin(A) + 150;
            glVertex2f(x, y);
      }

      glEnd();
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(1.0, 0, 1.0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 570;
            float y = r * sin(A) + 150;
            glVertex2f(x, y);
      }

      glEnd();
}

void drawHomes(void)
{
      //1st home part1
      glBegin(GL_POLYGON);
      glColor3ub(225, 204, 229); // Maximum Green
      glVertex2i(600, 550);
      glVertex2i(660, 530);
      glVertex2i(660, 590);
      glVertex2i(630, 640);
      glVertex2i(600, 590);
      glEnd();

      // part 2
      glBegin(GL_POLYGON);
      glColor3ub(102, 0, 102); // Maximum Green
      glVertex2i(630, 640);
      glVertex2i(640, 630);
      glVertex2i(600, 585);
      glVertex2i(590, 585);
      glEnd();

      // part 3
      glBegin(GL_POLYGON);
      glColor3ub(102, 0, 102); // Maximum Green
      glVertex2i(660, 580);
      glVertex2i(720, 590);
      glVertex2i(740, 640);
      glVertex2i(630, 640);
      glEnd();

      // part 4
      glBegin(GL_POLYGON);
      glColor3ub(255, 204, 255); // Maximum Green
      glVertex2i(660, 530);
      glVertex2i(720, 545);
      glVertex2i(720, 590);
      glVertex2i(660, 580);
      glEnd();

      //first home door 1`
      glBegin(GL_POLYGON);
      glColor3ub(0, 0, 0); // Maximum Green
      glVertex2i(610, 545);
      glVertex2i(640, 535);
      glVertex2i(640, 580);
      glVertex2i(610, 585);
      glEnd();

      // 2nd home part 1
      glBegin(GL_POLYGON);
      glColor3ub(255, 255, 255); // Maximum Green
      glVertex2i(720, 530);
      glVertex2i(800, 520);
      glVertex2i(800, 600);
      glVertex2i(760, 670);
      glVertex2i(720, 595);
      glEnd();

      // part 2
      glBegin(GL_POLYGON);
      glColor3ub(255, 51, 51); // Maximum Green
      glVertex2i(770, 660);
      glVertex2i(760, 670);
      glVertex2i(710, 595);
      glVertex2i(725, 605);
      glEnd();

      // part 3
      glBegin(GL_POLYGON);
      glColor3ub(255, 51, 51); // Maximum Green
      glVertex2i(800, 595);
      glVertex2i(900, 600);
      glVertex2i(860, 670);
      glVertex2i(760, 670);
      glEnd();

      // part 4
      glBegin(GL_POLYGON);
      glColor3ub(153, 204, 255); // Maximum Green
      glVertex2i(800, 520);
      glVertex2i(890, 540);
      glVertex2i(890, 600);
      glVertex2i(800, 595);
      glEnd();

      // 2nd home door 2
      glBegin(GL_POLYGON);
      glColor3ub(0, 0, 0); // Maximum Green
      glVertex2i(745, 528);
      glVertex2i(775, 525);
      glVertex2i(775, 580);
      glVertex2i(745, 576);
      glEnd();

      // 3rd home(part 1)
      glBegin(GL_POLYGON);
      glColor3ub(255, 204, 204);
      glVertex2i(0, 480);
      glVertex2i(100, 450);
      glVertex2i(100, 530);
      glVertex2i(0, 540);
      glEnd();

      // 3rd home (part 2)
      glBegin(GL_POLYGON);
      glColor3ub(0, 0, 102);
      glVertex2i(0, 540);
      glVertex2i(100, 530);
      glVertex2i(150, 600);
      glVertex2i(0, 590);
      glVertex2i(150, 600);
      glVertex2i(200, 530);
      glVertex2i(200, 530);
      glVertex2i(190, 530);
      glVertex2i(190, 530);
      glVertex2i(130, 600);
      glEnd();

      // 3rd home (part 3)
      glBegin(GL_POLYGON);
      glColor3ub(192, 192, 192);
      glVertex2i(100, 450);
      glVertex2i(100, 530);
      glVertex2i(140, 590);
      glVertex2i(190, 530);
      glVertex2i(200, 480);
      glEnd();

      // 4th home (part 1)
      glBegin(GL_POLYGON);
      glColor3ub(204, 0, 0);
      glVertex2i(150, 500);
      glVertex2i(250, 490);
      glVertex2i(300, 580);
      glVertex2i(200, 575);
      glEnd();

      // 4th home (part 2)
      glBegin(GL_POLYGON);
      glColor3ub(255, 229, 204);
      glVertex2i(170, 500);
      glVertex2i(250, 490);
      glVertex2i(250, 400);
      glVertex2i(170, 440);
      glEnd();

      // 4th home (part 3)
      glBegin(GL_POLYGON);
      glColor3ub(204, 209, 255);
      glVertex2i(250, 400);
      glVertex2i(350, 420);
      glVertex2i(350, 490);
      glVertex2i(300, 580);
      glVertex2i(250, 490);
      glEnd();

      // 4th home (part 4)
      glBegin(GL_POLYGON);
      glColor3ub(204, 0, 0);
      glVertex2i(360, 480);
      glVertex2i(300, 580);
      glVertex2i(290, 570);
      glVertex2i(340, 480);

      glEnd();

      //4th home (door)
      glBegin(GL_POLYGON);
      glColor3ub(0, 0, 0);
      glVertex2i(280, 405);
      glVertex2i(325, 410);
      glVertex2i(320, 490);
      glVertex2i(280, 485);

      glEnd();
}

void drawTrees(void)
{
      //tree 1(part 1)
      glBegin(GL_POLYGON);
      glColor3ub(153, 76, 0); // Maximum Green
      glVertex2i(540, 500);
      glVertex2i(560, 500);
      glVertex2i(560, 580);
      glVertex2i(540, 580);
      glEnd();

      //tree1 (leaf 1)
      glBegin(GL_POLYGON);
      glColor3ub(0, 51, 25); // Maximum Green
      glVertex2i(510, 580);
      glVertex2i(590, 580);
      glVertex2i(550, 630);
      glEnd();

      //tree1 (leaf 2)
      glBegin(GL_POLYGON);
      glColor3ub(0, 102, 0); // Maximum Green
      glVertex2i(510, 610);
      glVertex2i(590, 610);
      glVertex2i(550, 660);
      glEnd();

      //tree1 (leaf 3)
      glBegin(GL_POLYGON);
      glColor3ub(76, 153, 0); // Maximum Green
      glVertex2i(510, 640);
      glVertex2i(590, 640);
      glVertex2i(550, 740);
      glEnd();

      //tree 2( PART 1)
      glBegin(GL_POLYGON);
      glColor3ub(102, 0, 0); // Maximum Green
      glVertex2i(920, 570);
      glVertex2i(930, 570);
      glVertex2i(930, 620);
      glVertex2i(920, 620);
      glEnd();

      // tree 2 (leaf 1)
      glBegin(GL_TRIANGLES);
      glColor3ub(76, 153, 0); // Maximum Green
      glVertex2i(900, 620);
      glVertex2i(950, 620);
      glVertex2i(920, 700);
      glEnd();
      // tree 2(leaf 2)
      glBegin(GL_TRIANGLES);
      glColor3ub(0, 102, 0); // Maximum green
      glVertex2i(900, 660);
      glVertex2i(950, 660);
      glVertex2i(925, 720);
      glEnd();

      //corner tree (part 1)
      glBegin(GL_POLYGON);
      glColor3ub(315, 0, 0);
      glVertex2i(1020, 480);
      glVertex2i(1030, 400);
      glVertex2i(990, 400);
      glVertex2i(1000, 480);
      glVertex2i(970, 560);
      glVertex2i(975, 565);
      glVertex2i(985, 525);
      glVertex2i(995, 525);
      glVertex2i(1000, 675);
      glVertex2i(1005, 535);
      glVertex2i(1050, 580);
      glVertex2i(1000, 460);
      glVertex2i(980, 400);
      glEnd();

      //corner tree (bottom part)
      glBegin(GL_POLYGON);
      glColor3ub(40, 0, 0); // Maximum Green
      glVertex2i(1030, 400);
      glVertex2i(1050, 420);
      glVertex2i(1050, 380);
      glVertex2i(1030, 380);
      glVertex2i(1010, 370);
      glVertex2i(900, 380);
      glVertex2i(990, 400);
      glVertex2i(1000, 430);
      glEnd();

      //corner tree (leaf 1)
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(51, 95, 0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 56.85;
            float x = r * cos(A) + 1010;
            float y = r * sin(A) + 655;
            glVertex2f(x, y);
      }
      glEnd();

      //corner tree (leaf 2)
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(51, 90, 0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 42.85;
            float x = r * cos(A) + 1050;
            float y = r * sin(A) + 727;
            glVertex2f(x, y);
      }
      glEnd();

      //corner tree (leaf 2)
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(51, 95, 0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 44.85;
            float x = r * cos(A) + 1040;
            float y = r * sin(A) + 680;
            glVertex2f(x, y);
      }
      glEnd();

      //corner tree (leaf 3)
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(51, 95, 0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 31.85;
            float x = r * cos(A) + 970;
            float y = r * sin(A) + 580;
            glVertex2f(x, y);
      }
      glEnd();

      //corner tree (leaf 4)
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(51, 97, 0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 48.85;
            float x = r * cos(A) + 1050;
            float y = r * sin(A) + 590;
            glVertex2f(x, y);
      }
      glEnd();

      // tree 3(part 1)
      glBegin(GL_POLYGON);
      glColor3ub(102, 0, 0);
      glVertex2i(400, 490);
      glVertex2i(420, 490);
      glVertex2i(420, 380);
      glVertex2i(400, 380);
      glEnd();

      // tree 3 (leaf 1)
      glBegin(GL_POLYGON);
      glColor3ub(0, 51, 25);
      glVertex2i(340, 490);
      glVertex2i(480, 490);
      glVertex2i(410, 600);
      glEnd();

      //  tree 3 (leaf 2)
      glBegin(GL_POLYGON);
      glColor3ub(0, 51, 25);
      glVertex2i(340, 530);
      glVertex2i(480, 530);
      glVertex2i(410, 650);
      glEnd();

      // tree 3 (leaf 3)
      glBegin(GL_POLYGON);
      glColor3ub(0, 51, 25);
      glVertex2i(340, 570);
      glVertex2i(480, 570);
      glVertex2i(410, 700);
      glEnd();
}

void drawCloudOne(void)
{
      //cloud 1
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(240, 240, 240); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 30.85;
            float x = r * cos(A) + 350;
            float y = r * sin(A) + 920;
            glVertex2f(x, y);
      }

      glEnd();


      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(240, 240, 240); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 30.85;
            float x = r * cos(A) + 320;
            float y = r * sin(A) + 900;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(240, 240, 240); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 30.85;
            float x = r * cos(A) + 380;
            float y = r * sin(A) + 900;
            glVertex2f(x, y);
      }

      glEnd();
}

void drawCloudTwo(void)

 {
//cloud 2
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(240, 240, 240); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 38.85;
            float x = r * cos(A) + 70;
            float y = r * sin(A) + 950;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(240, 240, 240); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 38.85;
            float x = r * cos(A) + 30;
            float y = r * sin(A) + 925;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(240, 240, 240); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 38.85;
            float x = r * cos(A) + 90;
            float y = r * sin(A) + 915;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(240, 240, 240); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 38.85;
            float x = r * cos(A) + 130;
            float y = r * sin(A) + 930;
            glVertex2f(x, y);
      }

      glEnd();
 }

 void drawCloudThree(void)
 {
      //cloud 3
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(249, 249, 249); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 35.85;
            float x = r * cos(A) + 790;
            float y = r * sin(A) + 950;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(249, 249, 249); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 28.85;
            float x = r * cos(A) + 760;
            float y = r * sin(A) + 930;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(249, 249, 249); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 27.85;
            float x = r * cos(A) + 835;
            float y = r * sin(A) + 970;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(249, 249, 249); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 27.85;
            float x = r * cos(A) + 835;
            float y = r * sin(A) + 940;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(249, 249, 249); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 25.85;
            float x = r * cos(A) + 865;
            float y = r * sin(A) + 945;
            glVertex2f(x, y);
      }

      glEnd();
}

void drawSun(void)
{
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(255, 205, 40); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 30.85;
            float x = r * cos(A) + 350;
            float y = r * sin(A) + 860;
            glVertex2f(x, y);
      }

      glEnd();
}

void drawSignals(void)
{
      //Signal (part 1)
      glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2i(98, 420);
      glVertex2i(87, 420);
      glVertex2i(87, 200);
      glVertex2i(98, 200);
      glEnd();

      //Signal (part 2)
      glBegin(GL_QUADS);
      glColor3ub(172, 172, 172);
      glVertex2i(105, 420);
      glVertex2i(80, 420);
      glVertex2i(80, 340);
      glVertex2i(105, 340);
      glEnd();

      //SIGNAL ( RED light)
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(255, 0, 0); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 92;
            float y = r * sin(A) + 405;
            glVertex2f(x, y);
      }
      glEnd();

      //SIGNAL (yellow light)
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(255, 255, 0); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 92;
            float y = r * sin(A) + 380;
            glVertex2f(x, y);
      }
      glEnd();

      //SIGNAL (Green light)
      glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(0, 153, 0); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 92;
            float y = r * sin(A) + 355;
            glVertex2f(x, y);
      }
      glEnd();
}

void drawBench(void)
{
      // bench (part 1)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2i(780, 425);
      glVertex2i(775, 425);
      glVertex2i(775, 388);
      glVertex2i(780, 388);
      glEnd();

      // bench (part 2)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2i(700, 425);
      glVertex2i(705, 425);
      glVertex2i(705, 388);
      glVertex2i(700, 388);
      glEnd();

      // bench (part 3)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2i(800, 420);
      glVertex2i(680, 420);
      glVertex2i(680, 413);
      glVertex2i(800, 413);
      glEnd();

      // bench (part 4)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2i(800, 410);
      glVertex2i(680, 410);
      glVertex2i(680, 403);
      glVertex2i(800, 403);
      glEnd();

      // bench (part 5)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2i(800, 400);
      glVertex2i(680, 400);
      glVertex2i(680, 393);
      glVertex2i(800, 393);
      glEnd();

      // bench (part 6)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2i(800, 388);
      glVertex2i(680, 388);
      glVertex2i(670, 368);
      glVertex2i(810, 368);
      glVertex2i(670, 368);
      glVertex2i(810, 368);
      glVertex2i(810, 360);
      glVertex2i(670, 360);
      glEnd();

      // bench (part 7)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2i(680, 360);
      glVertex2i(685, 360);
      glVertex2i(687, 330);
      glVertex2i(680, 330);
      glEnd();

      // bench (part 8)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2i(690, 360);
      glVertex2i(695, 360);
      glVertex2i(697, 340);
      glVertex2i(690, 340);
      glEnd();

      // bench (part 9)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2i(800, 360);
      glVertex2i(795, 360);
      glVertex2i(795, 330);
      glVertex2i(802, 330);
      glEnd();

      // bench (part 10)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2i(790, 360);
      glVertex2i(785, 360);
      glVertex2i(785, 340);
      glVertex2i(792, 340);
      glEnd();
}

void drawWindmillOneTop(void)
{
glBegin(GL_POLYGON);
 glColor3ub(0, 153, 0);

        glVertex2i(0, 0);
        glVertex2i(30, 15);
        glVertex2i(5, -2);
        glVertex2i(0, 0);
        glVertex2i(-25, 15);
        glVertex2i(5, -8);
        glVertex2i(0, 0);
        glVertex2i(10, -30);
        glVertex2i(5, 0);

        glEnd();
}
void drawWindmillOneBottom(void) {
    glBegin(GL_QUADS);
      glColor3ub(0,0, 0);
      glVertex2i(490, 910);
      glVertex2i(485, 910);
      glVertex2i(485, 830);
      glVertex2i(490, 830);
      glEnd();

    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(0, 153, 0); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 5.0;
            float x = r * cos(A) + 488;
            float y = r * sin(A) + 910;
            glVertex2f(x, y);
      }
      glEnd();
}


void drawWindmillTwoBottom(void)
{
   glBegin(GL_QUADS);
      glColor3ub(0,0, 0);
      glVertex2i(575, 910);
      glVertex2i(580, 910);
      glVertex2i(580, 835);
      glVertex2i(575, 835);
      glEnd();

       glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(0, 153, 0); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 4.80;
            float x = r * cos(A) + 577;
            float y = r * sin(A) + 910;
            glVertex2f(x, y);
      }
      glEnd();


}


void drawWindmillThreeBottom(void)
{
   glBegin(GL_QUADS);
      glColor3ub(0,0, 0);
      glVertex2i(650, 910);
      glVertex2i(655, 910);
      glVertex2i(655, 845);
      glVertex2i(650, 841);
      glEnd();

       glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(0, 153, 0); //249,215,28 //255,140,0
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 5.0;
            float x = r * cos(A) + 653;
            float y = r * sin(A) + 910;
            glVertex2f(x, y);
      }
      glEnd();



}

void drawPlane(void)
{
      glBegin(GL_QUADS);
      glColor3ub(150,150,150);
      glVertex2i(40, 965);
      glVertex2i(90, 970);
      glVertex2i(90, 955);
      glVertex2i(20, 955);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub(150,150,150);
      glVertex2i(90, 970);
      glVertex2i(90, 955);
      glVertex2i(100, 960);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub(0,0,200);
      glVertex2i(45, 959);
      glVertex2i(60, 959);
      glVertex2i(15, 935);
      glEnd();

       glBegin(GL_TRIANGLES);
      glColor3ub(0,0,200);
      glVertex2i(70, 963);
      glVertex2i(55, 963);
      glVertex2i(45, 990);
      glEnd();

      glBegin(GL_QUADS); // Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,200);
      glVertex2i(20, 957);
      glVertex2i(30, 959);
      glVertex2i(25, 980);
      glVertex2i(20, 980);
      glEnd();

}

void drawZebracrossing(void)
{
      glBegin(GL_QUADS); // Draw a Red 1x1 Square centered at origin
      glColor3ub(255,255,255);
      glVertex2i(40, 10);
      glVertex2i(100, 10);
      glVertex2i(85, 200);
      glVertex2i(55, 200);
      glEnd();

      glBegin(GL_QUADS); // Draw a Red 1x1 Square centered at origin
      glColor3ub(0,0,0);
      glVertex2i(45, 30);
      glVertex2i(95, 15);
      glVertex2i(93, 35);
      glVertex2i(47, 50);
      glEnd();

      glBegin(GL_QUADS); // Draw a Red 1x1 Square centered at origin
      glColor3ub(0,0,0);
      glVertex2i(47, 65);
      glVertex2i(93, 50);
      glVertex2i(91, 70);
      glVertex2i(49, 85);
      glEnd();

      glBegin(GL_QUADS); // Draw a Red 1x1 Square centered at origin
      glColor3ub(0,0,0);
      glVertex2i(50, 100);
      glVertex2i(91, 85);
      glVertex2i(89, 105);
      glVertex2i(52, 120);
      glEnd();

       glBegin(GL_QUADS); // Draw a Red 1x1 Square centered at origin
      glColor3ub(0,0,0);
      glVertex2i(54, 135);
      glVertex2i(89, 120);
      glVertex2i(87, 140);
      glVertex2i(55, 155);
      glEnd();

       glBegin(GL_QUADS); // Draw a Red 1x1 Square centered at origin
      glColor3ub(0,0,0);
      glVertex2i(56, 170);
      glVertex2i(87, 155);
      glVertex2i(85, 175);
      glVertex2i(57, 190);
      glEnd();
}


// Variables
int _carOne = 0;
int _carTwo = 0;
int _carThree = 0;
float _boatOne = 0.0;
float _boatTwo = 0.0;
float _cloudOne = 0.0;
float _cloudTwo = 0.0;
float _cloudThree = 0.0;
float _plane = 0.0;

// Glut display function
void myDisplay(void)
{
      glClear(GL_COLOR_BUFFER_BIT); // clear the screen

      drawSky();
      drawSkyBottom();
      drawRiver();

      // Boat 1 with animation
      glPushMatrix();
      glTranslated(_boatOne, 0, 0);
      drawBoatOne();
      glPopMatrix();

      // Boat 2 with animation
      glPushMatrix();
      glTranslated(_boatTwo, 0, 0);
      drawBoatTwo();
      glPopMatrix();

      drawGrass();
      drawLandShades();
      drawRoads();
      drawRoadSigns();
      drawSignals();
      drawZebracrossing();

      //car 1 with animation
      glPushMatrix();
      glTranslated(_carOne, 0, 0);
      drawCarOne(); // Car One
      glPopMatrix();

      //car 2
      glPushMatrix();
      glTranslated(_carTwo, 0, 0);
      drawCarTwo();
      glPopMatrix();

      // Car 3 with animation
      glPushMatrix();
      glTranslated(_carThree, 0, 0);
      drawCarThree(); // Car three
      glPopMatrix();

      drawHomes();
      drawTrees();

      // cloud 1 with animation
       glPushMatrix();
      glTranslated(_cloudOne, 0, 0);
      drawCloudOne();
      glPopMatrix();

      // cloud 2 with animation
       glPushMatrix();
      glTranslated(_cloudTwo, 0, 0);
      drawCloudTwo();
      glPopMatrix();

      // cloud 3 with animation
       glPushMatrix();
      glTranslated(_cloudThree, 0, 0);
      drawCloudThree();
      glPopMatrix();

         // plane with animation
       glPushMatrix();
      glTranslated(_plane, 0, 0);
      drawPlane();
      glPopMatrix();



      drawSun();
      drawBench();


        glPushMatrix();
        glTranslatef(487, 910, 0);
        glRotatef(_angle, 0, 0, 1);
        drawWindmillOneTop();
        glPopMatrix();
        drawWindmillOneBottom();



        glPushMatrix();
        glTranslatef(576, 910, 0);
        glRotatef(_angle, 0, 0, 1);
        drawWindmillOneTop();
        glPopMatrix();
     drawWindmillTwoBottom();




        glPushMatrix();
        glTranslatef(653, 910, 0);
        glRotatef(_angle, 0, 0, 1);
        drawWindmillOneTop();
        glPopMatrix();
      drawWindmillThreeBottom();


      glutSwapBuffers();
}

void update(int value)
{

        _angle += 2.0;
        if (_angle > 360) {
		_angle -= 360;
        }


        cout<< _angle << endl;


      // Car one: moving right
      _carOne += 3.0;
      if (_carOne > 250)
      {
            _carOne = -900;
      }

      // Car Two: moving right
      _carTwo += 5.0;
      if (_carTwo > 950)
      {
            _carTwo -= 2000;
      }

      // Car one: moving left
      _carThree -= 2.0;
      if (_carThree < -640)
      {
            _carThree = 640;
      }

      // Boat one : Right
      _boatOne += 0.80;
      if (_boatOne > 1200)
      {
            _boatOne -= 1300;
      }

      // Boat two : Left
      _boatTwo -= 0.50;
      if (_boatTwo < -900)
      {
            _boatTwo = 400;
      }

       // Cloud one: moving Left
      _cloudOne -= 0.25;
      if (_cloudOne < -1200)
      {
            _cloudOne = 1300;
      }

        // cloud 2 move : Right
      _cloudTwo += 0.20;
      if (_cloudTwo > 1200)
      {
            _cloudTwo -= 1300;
      }

       // cloud 3 move : Right
      _cloudThree += 0.20;
      if (_cloudThree > 1200)
      {
            _cloudThree -= 1300;
      }

         // plane move : Right
      _plane += 0.70;
      if (_plane > 1200)
      {
            _plane -= 1300;
      }

      glutPostRedisplay();          // Update the GLUT
      glutTimerFunc(25, update, 0); // Re-call it
}

void initRendering(void)
{
      glClearColor(0.0, 0.0, 0.0, 0.0); // set the bg color to a bright black
      glMatrixMode(GL_MODELVIEW);      // set up appropriate matrices-
      glLoadIdentity();                 // to be explained
    //  glRotatef(-_cameraAngle, 0.0f, 1.0f, 0.0f);


      gluOrtho2D(0.0, 1050.0, 0.0, 1000.0);
      //glMatrixMode(GL_MODELVIEW);
}

int main(int iArgc, char **cppArgv)
{
      glutInit(&iArgc, cppArgv);                                // initialize the toolkit
      glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); // set the display mode
      glutInitWindowSize(640, 480);                             // set window size
      glutInitWindowPosition(150, 150);                         // set window upper left corner position on screen
      glutCreateWindow("River Side Scenario");                  // open the screen window
      glutTimerFunc(25, update, 0);
      glutDisplayFunc(myDisplay);
      initRendering(); // additional initializations as necessary
      glutMainLoop();  // go into a endless loop

      return 0;
}
