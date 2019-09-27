//LEDs. red, yellow, green, blue, blue, green, yellow, red
int led[]={4, 5, 6, 7, 9, 10, 11, 12};
int i;
int ind;
int idex;
int idx;

void setup() {
 for(i = 0; i <= 7; i++)
  {
    pinMode(led[i],OUTPUT);
  }
}

void loop() {
  
  beginning();
  middle1();
  middle2();
  beatDrop();
}

void beginning() {
  
                                //FIRST LOOP
  
  //low note
  digitalWrite(led[0],HIGH);
  delay(350);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],HIGH);
  delay(240);

  digitalWrite(led[1],LOW);
  digitalWrite(led[2],HIGH);
  delay(1750);

  digitalWrite(led[2],LOW);
  digitalWrite(led[3],HIGH);
  delay(740);

  digitalWrite(led[3],LOW);
  digitalWrite(led[2],HIGH);
  
  //high note
  digitalWrite(led[6],HIGH);
  delay(200);
  
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],HIGH);
  delay(50);
  
  //low note
  digitalWrite(led[2],LOW);
  digitalWrite(led[1],HIGH);
  delay(200);
  
  //high note
  digitalWrite(led[5], LOW);
  digitalWrite(led[4], HIGH);
  delay(40);
  
  //low note
  digitalWrite(led[1],LOW);
  digitalWrite(led[0],HIGH);
  delay(210);  
  
  //high note
  digitalWrite(led[4], LOW);
  digitalWrite(led[5], HIGH);
  
  delay(250);
  digitalWrite(led[5], LOW);
  digitalWrite(led[4], HIGH);
  
  delay(250);
  digitalWrite(led[4], LOW);
  digitalWrite(led[5], HIGH);
  delay(260);
  
  digitalWrite(led[5], LOW);
  digitalWrite(led[6],HIGH);
  delay(190);
  
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],HIGH);
  delay(210);
  
  digitalWrite(led[5], LOW);
  digitalWrite(led[4], HIGH);
  delay(250);
  
  digitalWrite(led[4], LOW);
  digitalWrite(led[5], HIGH);
  delay(210);
  
  digitalWrite(led[5], LOW);
  digitalWrite(led[4], HIGH);
  delay(170);
  
  //low note
  digitalWrite(led[0],LOW);
  delay(40);
  
  //high note
  digitalWrite(led[4], LOW);
  digitalWrite(led[5], HIGH);
  delay(260);
  
  digitalWrite(led[5], LOW);
  delay(120);


                                 //SECOND LOOP
  
  //low note
  digitalWrite(led[0],HIGH);
  delay(350);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],HIGH);
  delay(240);

  digitalWrite(led[1],LOW);
  digitalWrite(led[2],HIGH);
  delay(1750);

  digitalWrite(led[2],LOW);
  digitalWrite(led[3],HIGH);
  delay(740);
  
  digitalWrite(led[3],LOW);
  digitalWrite(led[2],HIGH);
  
  //high note
  digitalWrite(led[6],HIGH);
  delay(200);
  
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],HIGH);
  delay(50);
  
  //low note
  digitalWrite(led[2],LOW);
  digitalWrite(led[1],HIGH);
  delay(200);
  
  //high note
  digitalWrite(led[5], LOW);
  digitalWrite(led[4], HIGH);
  delay(40);
  
  //low note
  digitalWrite(led[1],LOW);
  digitalWrite(led[0],HIGH);
  
  //high note
  delay(210);
  digitalWrite(led[4], LOW);
  digitalWrite(led[5], HIGH);
  
  delay(250);
  digitalWrite(led[5], LOW);
  digitalWrite(led[4], HIGH);
  
  delay(250);
  digitalWrite(led[4], LOW);
  digitalWrite(led[5], HIGH);
  delay(260);
  
  digitalWrite(led[5], LOW);
  digitalWrite(led[6],HIGH);
  delay(190);
  
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],HIGH);
  delay(210);
  
  digitalWrite(led[5], LOW);
  digitalWrite(led[4], HIGH);
  delay(250);
  
  digitalWrite(led[4], LOW);
  digitalWrite(led[5], HIGH);
  delay(210);
  
  digitalWrite(led[5], LOW);
  digitalWrite(led[4], HIGH);
  delay(170);
  
  //low note
  digitalWrite(led[0],LOW);
  delay(40);
  
  //high note
  digitalWrite(led[4], LOW);
  digitalWrite(led[5], HIGH);
  delay(260);
  
  digitalWrite(led[5], LOW);
  delay(120);

}

void middle1() {

  //low note
  digitalWrite(led[0],HIGH);
  
  //line 1
  digitalWrite(led[7],HIGH);
  delay(210);
  
  digitalWrite(led[6],HIGH);
  delay(140);
  
  //low note
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],HIGH);
  delay(240);
  
  //low note
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],HIGH);
  delay(620);
  
  //line 1
  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  delay(280);
  
  digitalWrite(led[6],HIGH);
  delay(260);
  
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],HIGH);
  delay(310);
  
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],HIGH);
  delay(280);
  
  //low note
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],HIGH);
  delay(130);
  
  //line 1
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],HIGH);
  delay(360);
  
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],HIGH);
  delay(190);
  
  digitalWrite(led[7],HIGH);
  delay(60);

  //low note
  digitalWrite(led[3],LOW);
  
  //high note
  digitalWrite(led[2],HIGH);
  delay(190);
  
  digitalWrite(led[2],LOW);
  digitalWrite(led[1],HIGH);
  delay(210);
  
  //line 1
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  
  //high note
  digitalWrite(led[1], LOW);
  digitalWrite(led[0], HIGH);
  delay(250);
  
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);
  delay(210);
  
  digitalWrite(led[1], LOW);
  digitalWrite(led[0], HIGH);
  delay(170);
  
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);
  delay(260);
  
  digitalWrite(led[1], LOW);
  digitalWrite(led[2],HIGH);
  delay(190);
  
  digitalWrite(led[2],LOW);
  digitalWrite(led[1],HIGH);
  delay(210);

  digitalWrite(led[1], LOW);
  digitalWrite(led[0], HIGH);
  delay(250);
  
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);
  delay(210);
  
  digitalWrite(led[1], LOW);
  digitalWrite(led[0], HIGH);
  delay(170);
  
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);
  delay(260);
  
  digitalWrite(led[1], LOW);

                                      //BEGIN LINE 2
  
  //low note
  digitalWrite(led[0],HIGH);
  delay(100);
  
  //line 2
  digitalWrite(led[7],HIGH);
  delay(280);
  digitalWrite(led[6],HIGH);
  delay(70);
  
  //low note
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],HIGH);
  delay(240);
  
  //low note
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],HIGH);
  delay(710);
  
  //line 2
  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  delay(300);
  
  digitalWrite(led[6],HIGH);
  delay(340);
  
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],HIGH);
  delay(410);
  
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],HIGH);
  delay(280);
  
  //low note
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],HIGH);
  delay(80);
  
  //line 2
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],HIGH);
  delay(240);
  
  digitalWrite(led[5],LOW);
  delay(240);
  
  digitalWrite(led[5],HIGH);
  delay(290);
  
  digitalWrite(led[6], HIGH);
  delay(60);
  
  //low note
  digitalWrite(led[3],LOW);

  //high note
  digitalWrite(led[2],HIGH);
  delay(190);

  digitalWrite(led[2],LOW);
  digitalWrite(led[1],HIGH);
  delay(210);

  //line 2
  digitalWrite(led[7], HIGH);
  
  //high note
  digitalWrite(led[1], LOW);
  digitalWrite(led[0], HIGH);
  delay(250);
  
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);
  delay(210);
  
  digitalWrite(led[1], LOW);
  digitalWrite(led[0], HIGH);
  delay(150);

  //line 2
  digitalWrite(led[5], LOW);
  digitalWrite(led[6], LOW);
  digitalWrite(led[7], LOW);
  delay(20);

  //high note
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);
  delay(260);
  
  digitalWrite(led[1], LOW);
  digitalWrite(led[2],HIGH);
  delay(190);
  
  digitalWrite(led[2],LOW);
  digitalWrite(led[1],HIGH);
  delay(210);

  digitalWrite(led[1], LOW);
  digitalWrite(led[0], HIGH);
  delay(250);
  
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);
  delay(210);
  
  digitalWrite(led[1], LOW);
  digitalWrite(led[0], HIGH);
  delay(170);
  
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);
  delay(260);
  
  digitalWrite(led[1], LOW);

                                     //BEGIN LINE 3
  //low note
  digitalWrite(led[0],HIGH);
  delay(150);
  
  //line 3
  digitalWrite(led[7],HIGH);
  delay(200);

  //low note
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],HIGH);
  delay(240);

  digitalWrite(led[1],LOW);
  digitalWrite(led[2],HIGH);

  //line 3
  digitalWrite(led[6],HIGH);
  delay(1000);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],HIGH);
  delay(240);

  digitalWrite(led[5],LOW);
  digitalWrite(led[4],HIGH);
  delay(250);

  //low note
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],HIGH);
  delay(100);

  //line 3
  digitalWrite(led[4],LOW);
  delay(160);
  
  digitalWrite(led[4],HIGH);
  delay(210);

  digitalWrite(led[5],HIGH);
  delay(200);
  
  //low note
  digitalWrite(led[3],LOW);
  
  //high note
  digitalWrite(led[2],HIGH);
  delay(180);

  //line 3
  digitalWrite(led[6],HIGH);
  delay(10);

  //high note
  digitalWrite(led[2],LOW);
  digitalWrite(led[1],HIGH);
  delay(210);

  digitalWrite(led[1], LOW);
  digitalWrite(led[0], HIGH);
  delay(250);
  
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);
  delay(170);

  //line 3
  digitalWrite(led[7],HIGH);
  delay(40);

  //high note
  digitalWrite(led[1], LOW);
  digitalWrite(led[0], HIGH);
  delay(170);
  
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);
  delay(220);

  //line 3
  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],LOW);
  delay(40);

  //high note
  digitalWrite(led[1], LOW);
  digitalWrite(led[2],HIGH);
  delay(190);
  
  digitalWrite(led[2],LOW);
  digitalWrite(led[1],HIGH);
  delay(210);

  digitalWrite(led[1], LOW);
  digitalWrite(led[0], HIGH);
  delay(250);
  
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);
  delay(210);
  
  digitalWrite(led[1], LOW);
  digitalWrite(led[0], HIGH);
  delay(170);
  
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);
  delay(260);
  
  digitalWrite(led[1], LOW);

                                  //BEGIN LINE 4

  delay(250);
  
  //line 4
  digitalWrite(led[7],HIGH);
  delay(450);

  //high note
  digitalWrite(led[3],HIGH);
  delay(230);

  //high note
  digitalWrite(led[3],LOW);
  digitalWrite(led[2],HIGH);
  delay(50);

  //line 4
  digitalWrite(led[7],LOW);
  digitalWrite(led[6],HIGH);
  delay(180);
  
  //high note
  digitalWrite(led[2],LOW);
  digitalWrite(led[1],HIGH);
  delay(230);

  digitalWrite(led[1],LOW);
  digitalWrite(led[0],HIGH);
  delay(260);
  
  //high note
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],HIGH);
  delay(250);

  digitalWrite(led[1],LOW);
  digitalWrite(led[2],HIGH);
  delay(270);

  digitalWrite(led[2],LOW);
  digitalWrite(led[1],HIGH);
  delay(250);

  digitalWrite(led[1],LOW);
  digitalWrite(led[0],HIGH);
  delay(240);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],HIGH);
  delay(250);
  
  //line 4
  digitalWrite(led[6],LOW);

  //high note
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],HIGH);
  delay(240);

  digitalWrite(led[2],LOW);
  digitalWrite(led[1],HIGH);
  delay(230);

  digitalWrite(led[1],LOW);
  digitalWrite(led[0],HIGH);

  //line 4
  digitalWrite(led[6],HIGH);
  delay(250);
  
  //line 4
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],HIGH);
  delay(50);
  
  //high note
  digitalWrite(led[0],LOW);
  digitalWrite(led[3],HIGH);
  delay(190);

  digitalWrite(led[3],LOW);
  digitalWrite(led[2],HIGH); 
  delay(170);
  
  //line 4
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],HIGH);
  delay(100);
  
  //high note
  digitalWrite(led[2],LOW);
  digitalWrite(led[1],HIGH);
  delay(230);
  
  digitalWrite(led[1],LOW);
  digitalWrite(led[0],HIGH);
  delay(260);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],HIGH);
  delay(190);

  digitalWrite(led[1],LOW);
  digitalWrite(led[2],HIGH);
  delay(270);


  //high note
  digitalWrite(led[2],LOW);
  digitalWrite(led[1],HIGH);
  delay(50);

  //line 4
  digitalWrite(led[4],LOW);  
  delay(200);

  digitalWrite(led[1],LOW);
  digitalWrite(led[0],HIGH);
  delay(240);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],HIGH);
  delay(250);

  digitalWrite(led[1],LOW);
  digitalWrite(led[2],HIGH);
  delay(240);



  //high note
  digitalWrite(led[2],LOW);
  digitalWrite(led[1],HIGH);
  delay(230);

  digitalWrite(led[1],LOW);
  digitalWrite(led[0],HIGH);
  delay(170);

  digitalWrite(led[0],LOW);
}

void middle2() {

                                      //PART A1

  //let
  digitalWrite(led[7],HIGH);
  digitalWrite(led[6],HIGH);
  delay(180);

  //me
  digitalWrite(led[5],HIGH);
  digitalWrite(led[4],HIGH);
  delay(240);

  //face
  digitalWrite(led[3],HIGH);
  digitalWrite(led[2],HIGH);
  delay(240);
  
  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[2],LOW);
  delay(120);
  
  //let2
  digitalWrite(led[7],HIGH);
  digitalWrite(led[6],HIGH);
  delay(210);

  //me2
  digitalWrite(led[5],HIGH);
  digitalWrite(led[4],HIGH);
  delay(190);

  //face2
  digitalWrite(led[3],HIGH);
  digitalWrite(led[2],HIGH);
  delay(240);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[2],LOW);
  delay(120);

  //let3
  digitalWrite(led[7],HIGH);
  digitalWrite(led[6],HIGH);
  delay(200);

  //me3
  digitalWrite(led[5],HIGH);
  digitalWrite(led[4],HIGH);
  delay(190);

  //face3
  digitalWrite(led[3],HIGH);
  digitalWrite(led[2],HIGH);
  delay(400);

  //my
  digitalWrite(led[1],HIGH);
  delay(380);

  //fears
  digitalWrite(led[0],HIGH);
  delay(610);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[0],LOW);
  delay(100);
                                  //PART A2

  

  //face
  digitalWrite(led[0],HIGH);
  delay(240);
  
  digitalWrite(led[0],LOW);
  delay(120);
  
  //let2
  digitalWrite(led[0],HIGH);
  delay(210);

  //me2
  digitalWrite(led[1],HIGH);
  delay(190);

  //face2
  digitalWrite(led[2],HIGH);
  delay(240);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  delay(120);

  //let3
  digitalWrite(led[0],HIGH);
  delay(200);

  //me3
  digitalWrite(led[1],HIGH);
  delay(190);

  //face3
  digitalWrite(led[2],HIGH);
  delay(400);

  //my
  digitalWrite(led[3],HIGH);
  delay(380);

  //fears
  digitalWrite(led[4],HIGH);
  delay(210);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  delay(50);
                                  //PART B1

  //let
  digitalWrite(led[7],HIGH);
  digitalWrite(led[6],HIGH);
  delay(180);

  //me
  digitalWrite(led[5],HIGH);
  digitalWrite(led[4],HIGH);
  delay(240);

  //face
  digitalWrite(led[3],HIGH);
  digitalWrite(led[2],HIGH);
  delay(240);
  
  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[2],LOW);
  delay(120);
  
  //let2
  digitalWrite(led[7],HIGH);
  digitalWrite(led[6],HIGH);
  delay(210);

  //me2
  digitalWrite(led[5],HIGH);
  digitalWrite(led[4],HIGH);
  delay(190);

  //face2
  digitalWrite(led[3],HIGH);
  digitalWrite(led[2],HIGH);
  delay(240);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[2],LOW);
  delay(120);

  //let3
  digitalWrite(led[7],HIGH);
  digitalWrite(led[6],HIGH);
  delay(200);

  //me3
  digitalWrite(led[5],HIGH);
  digitalWrite(led[4],HIGH);
  delay(190);

  //face3
  digitalWrite(led[3],HIGH);
  digitalWrite(led[2],HIGH);
  delay(400);

  //my
  digitalWrite(led[1],HIGH);
  delay(380);

  //fears
  digitalWrite(led[0],HIGH);
  delay(610);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[0],LOW);
  delay(50);
                                  //PART B2

  

  //face
  digitalWrite(led[0],HIGH);
  delay(240);
  
  digitalWrite(led[0],LOW);
  delay(120);
  
  //let2
  digitalWrite(led[0],HIGH);
  delay(210);

  //me2
  digitalWrite(led[1],HIGH);
  delay(190);

  //face2
  digitalWrite(led[2],HIGH);
  delay(240);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  delay(120);

  //let3
  digitalWrite(led[0],HIGH);
  delay(200);

  //me3
  digitalWrite(led[1],HIGH);
  delay(190);

  //face3
  digitalWrite(led[2],HIGH);
  delay(400);

  //my
  digitalWrite(led[3],HIGH);
  delay(380);

  //fears
  digitalWrite(led[4],HIGH);
  delay(260);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);

                                 //PART C1

  //won't
  digitalWrite(led[0],HIGH);
  digitalWrite(led[7],HIGH);
  delay(250);

  //be
  digitalWrite(led[1],HIGH);
  digitalWrite(led[6],HIGH);
  delay(190);

  //long
  digitalWrite(led[2],HIGH);
  digitalWrite(led[5],HIGH);
  delay(380);

  digitalWrite(led[0],LOW);
  digitalWrite(led[7],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[5],LOW);

  //won't
  digitalWrite(led[0],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  //be
  digitalWrite(led[1],HIGH);
  digitalWrite(led[6],HIGH);
  delay(190);

  //long
  digitalWrite(led[2],HIGH);
  digitalWrite(led[5],HIGH);
  delay(330);

  digitalWrite(led[0],LOW);
  digitalWrite(led[7],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[5],LOW);

  //i'm
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  delay(380);

  //almost
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[5],HIGH);
  delay(350);

  digitalWrite(led[2],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[6],HIGH);
  delay(400);

  //here
  digitalWrite(led[1],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[0],HIGH);
  digitalWrite(led[7],HIGH);
  delay(360);

  digitalWrite(led[0],LOW);
  digitalWrite(led[7],LOW);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[6],HIGH);
  delay(100);

  digitalWrite(led[1],LOW);
  digitalWrite(led[6],LOW);

                                //PART C2

  delay(200);
  //long
  digitalWrite(led[5],HIGH);
  delay(380);
  
  digitalWrite(led[5],LOW);

  //won't
  digitalWrite(led[7],HIGH);
  delay(200);

  //be
  digitalWrite(led[6],HIGH);
  delay(190);

  //long
  digitalWrite(led[5],HIGH);
  delay(330);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],LOW);

  //i'm
  digitalWrite(led[4],HIGH);
  delay(380);

  //almost
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],HIGH);
  delay(350);

  digitalWrite(led[5],LOW);
  digitalWrite(led[6],HIGH);
  delay(400);

  //here
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],HIGH);
  delay(360);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],HIGH);
  delay(150);



                                  //PART D1


  //watch
  digitalWrite(led[7],HIGH);
  digitalWrite(led[6],HIGH);
  delay(260);

  //me
  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  delay(210);

  //cry
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  delay(1410);

  //all
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  delay(690);

  //my
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[7],HIGH);
  digitalWrite(led[6],HIGH);
  delay(760);

  //tears
  digitalWrite(led[2],HIGH);
  digitalWrite(led[5],HIGH);
  delay(230);

  digitalWrite(led[4],HIGH);
  digitalWrite(led[3],HIGH);
  delay(100);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(200);
}

void beatDrop() {
  for(i = 0; i <= 7; i++)
  {
    digitalWrite(led[i],HIGH);
    delay(40);
    digitalWrite(led[i],LOW);
  }

  for(i = 7; i <= 0; i--)
  {
    digitalWrite(led[i],HIGH);
    delay(40);
    digitalWrite(led[i],LOW);
  }

  for(i = 0; i <= 7; i++)
  {
    digitalWrite(led[i],HIGH);
    delay(40);
    digitalWrite(led[i],LOW);
  }

  for(i = 7; i <= 0; i--)
  {
    digitalWrite(led[i],HIGH);
    delay(40);
    digitalWrite(led[i],LOW);
  }
  
  for(i = 0; i <= 7; i++)
  {
    digitalWrite(led[i],HIGH);
    delay(40);
    digitalWrite(led[i],LOW);
  }

  for(i = 7; i <= 0; i--)
  {
    digitalWrite(led[i],HIGH);
    delay(40);
    digitalWrite(led[i],LOW);
  }

  for(i = 0; i <= 7; i++)
  {
    digitalWrite(led[i],HIGH);
    delay(40);
    digitalWrite(led[i],LOW);
  }

  for(i = 7; i <= 0; i--)
  {
    digitalWrite(led[i],HIGH);
    delay(40);
    digitalWrite(led[i],LOW);
  }

  for(i = 0; i <= 7; i++)
  {
    digitalWrite(led[i],HIGH);
    delay(40);
    digitalWrite(led[i],LOW);
  }

  for(i = 7; i <= 0; i--)
  {
    digitalWrite(led[i],HIGH);
    delay(40);
    digitalWrite(led[i],LOW);
  }

  delay(150);

                                        //1ST LOOP A

  //1st part
  digitalWrite(led[0],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[7],LOW);
  digitalWrite(led[0],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[7],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[4],HIGH);
  delay(200);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  delay(190);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(260);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(100);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(190);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(260);
  
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(100);

  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(180);

  digitalWrite(led[5],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  delay(220);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],LOW);
  delay(170);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  delay(20);

  //2nd part
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[7],HIGH);
  digitalWrite(led[6],HIGH);
  delay(180);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  delay(170);

  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[4],HIGH);
  delay(170);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(200);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  for(i = 0; i <= 3; i++)
  {
    digitalWrite(led[i],HIGH);
    delay(80);
  }

  int i=7;

  for(i = 7; i >= 4; i--)
  {
    digitalWrite(led[i],HIGH);
    delay(80);
  }

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(300);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);


                                      //2ND LOOP A
  
  //1st part
  digitalWrite(led[0],HIGH);
  delay(170);

  digitalWrite(led[0],LOW);
  digitalWrite(led[7],HIGH);
  delay(170);

  digitalWrite(led[7],LOW);
  delay(20);
  
  digitalWrite(led[7],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[4],HIGH);
  delay(200);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  delay(190);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(260);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(100);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(190);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(260);
  
  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(100);

  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(180);

  digitalWrite(led[5],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  delay(220);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[5],LOW);
  digitalWrite(led[4],LOW);
  delay(170);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  delay(20);

  //2nd part
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[7],HIGH);
  digitalWrite(led[6],HIGH);
  delay(180);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  delay(170);

  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[4],HIGH);
  delay(170);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(200);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  for(ind = 0; ind <= 3; ind++)
  {
    digitalWrite(led[ind],HIGH);
    delay(80);
  }

  int ind=7;

  for(ind = 7; ind >= 4; ind--)
  {
    digitalWrite(led[ind],HIGH);
    delay(80);
  }

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(300);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);

                                  //1ST LOOP B
  //1st part
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[7],LOW);
  digitalWrite(led[0],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  delay(190);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(170);

  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(190);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[6],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[7],HIGH);
  delay(160);

  digitalWrite(led[1],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[7],LOW);
  digitalWrite(led[0],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[6],HIGH);
  delay(160);

  digitalWrite(led[0],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[7],HIGH);
  delay(140);

  digitalWrite(led[1],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[7],LOW);
  digitalWrite(led[0],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[6],HIGH);
  delay(160);

  digitalWrite(led[0],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[6],LOW);
  delay(20);

  //2nd part
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[7],HIGH);
  digitalWrite(led[6],HIGH);
  delay(180);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  delay(170);

  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[4],HIGH);
  delay(170);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(200);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  for(idex = 0; idex <= 3; idex++)
  {
    digitalWrite(led[idex],HIGH);
    delay(80);
  }

  int index=7;

  for(index = 7; index >= 4; index--)
  {
    digitalWrite(led[index],HIGH);
    delay(80);
  }

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(300);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  
                                  //2ND LOOP B

  //1st part
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  delay(190);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(170);

  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(190);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[6],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[7],HIGH);
  delay(160);

  digitalWrite(led[1],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[7],LOW);
  digitalWrite(led[0],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[6],HIGH);
  delay(160);

  digitalWrite(led[0],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[7],HIGH);
  delay(140);

  digitalWrite(led[1],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[7],LOW);
  digitalWrite(led[0],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[6],HIGH);
  delay(160);

  digitalWrite(led[0],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[6],LOW);
  delay(20);

  //2nd part
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[7],HIGH);
  digitalWrite(led[6],HIGH);
  delay(180);

  digitalWrite(led[7],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  delay(170);

  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[4],HIGH);
  delay(170);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  delay(20);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(200);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(180);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(20);

  for(idx = 0; idx <= 3; idx++)
  {
    digitalWrite(led[idx],HIGH);
    delay(80);
  }

  int idx=7;

  for(idx = 7; idx >= 4; idx--)
  {
    digitalWrite(led[idx],HIGH);
    delay(80);
  }

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(300);

  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(200);
  
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);
  digitalWrite(led[4],HIGH);
  digitalWrite(led[5],HIGH);
  digitalWrite(led[6],HIGH);
  digitalWrite(led[7],HIGH);
  delay(200);

  digitalWrite(led[0],LOW);
  digitalWrite(led[1],LOW);
  digitalWrite(led[2],LOW);
  digitalWrite(led[3],LOW);
  digitalWrite(led[4],LOW);
  digitalWrite(led[5],LOW);
  digitalWrite(led[6],LOW);
  digitalWrite(led[7],LOW);
  delay(800);
  
}

