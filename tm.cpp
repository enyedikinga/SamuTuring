#include <iostream>
#include "orchmach1.hpp"

int
main ()
{
  //14 314
  // TuringMachine<5> tm ( 9, 0, 9, 1, 11, 2, 5, 3, 20, 4, 17, 5, 24, 7, 29, 8, 15, 9, 1 );

  {TuringMachine<5> tm ( 9, 0, 9, 1, 11, 2, 5, 3, 20, 4, 17, 5, 24, 7, 29, 8, 15, 9, 1);std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 9, 1, 11, 2, 5, 3, 23, 4, 17, 5, 24, 7, 29, 8, 15, 9, 1);std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  /*
  <<< 3850058 <<<
  *TM:  50, -1,8(2704) , -1,10(2703) , -1,11(2702) , 0,6(48195) , 0,7(5) , 0,8(3) , 0,9(568244) , 0,10(4) , 0,11(7) , 1,6(1) , 1,7(20) , 1,8(5866) , 1,10(1) , 1,11(168921) , 2,0(2) , 2,1(1) , 2,2(13887) , 2,3(3) , 2,4(3) , 2,5(260975) , 3,18(10) , 3,20(262260) , 3,21(16) , 3,22(122) , 3,23(262229) , 4,12(2) , 4,14(7126) , 4,16(1571) , 4,17(149581) , 5,24(482702) , 5,25(2) , 5,27(42178) , 5,28(1) , 5,29(1) , 7,24(2) , 7,25(2) , 7,26(44358) , 7,28(2) , 7,29(472198) , 8,12(39139) , 8,13(1) , 8,14(10) , 8,15(485759) , 8,16(1) , 8,17(3) , 9,0(2) , 9,1(516504) , 9,2(12) , 9,3(2) , 9,5(8)
  *TM: (sort)  50, 0, 9, 9, 1, 8, 15, 5, 24, 7, 29, 3, 20, 3, 23, 2, 5, 1, 11, 4, 17, 0, 6, 7, 26, 5, 27, 8, 12, 2, 2, 4, 14, 1, 8, -1, 8, -1, 10, -1, 11, 4, 16, 3, 22, 1, 7, 3, 21, 9, 2, 3, 18, 8, 14, 9, 5, 0, 11, 0, 7, 0, 10, 2, 4, 0, 8, 8, 17, 2, 3, 7, 24, 7, 25, 7, 28, 2, 0, 9, 0, 5, 25, 9, 3, 4, 12, 2, 1, 1, 10, 8, 13, 1, 6, 5, 29, 8, 16, 5, 28
  **TM:  *6*5*6*5*4*5*5*6*5=2700000[56824][16892][26097][26226][14958][48270][47219][48575][51650]*1*1*1*2*1*1*1*1*1=2Possible TMs:2
  ***TM: 9, 0, 9, 1, 11, 2, 5, 3, 20, 4, 17, 5, 24, 7, 29, 8, 15, 9, 1
  ***TM: 9, 0, 9, 1, 11, 2, 5, 3, 23, 4, 17, 5, 24, 7, 29, 8, 15, 9, 1

  +++++++++++ VAN ++++++++++++++++++++++++++++++++++++++++++
   HABITUATION MONITOR: (isHABI MPU) 1 1 1 1 0 0 ||| 1 1
   HABITUATION MONITOR: 3850058 [LEARNED] Foobar0 0x928540 bogocertainty of convergence: 100 %
  3850058    #MPUs: 1 Observation (MPU): Foobar0 0x928540
  >>> 3850058 >>>
  */

  /*
  {TuringMachine<5> tm ( 9, 0, 6, 1, 8, 2, 2, 3, 20, 4, 14, 5, 27, 7, 26, 8, 12, 9, 1);std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 6, 1, 8, 2, 2, 3, 23, 4, 14, 5, 27, 7, 26, 8, 12, 9, 1);std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  */
  /*
  {TuringMachine<5> tm ( 9, 0, 9, 1, 8, 2, 2, 3, 20, 4, 16, 5, 24, 7, 29, 8, 15, 9, 1 );std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 9, 1, 8, 2, 2, 3, 23, 4, 16, 5, 24, 7, 29, 8, 15, 9, 1 );std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  */

  /*
    {TuringMachine<5> tm ( 9, 0, 9, 1, 11, 2, 5, 3, 20, 4, 17, 5, 24, 7, 29, 8, 15, 9, 1 );std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
    {TuringMachine<5> tm ( 9, 0, 9, 1, 11, 2, 5, 3, 20, 4, 17, 5, 27, 7, 29, 8, 12, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  */
  /*
  {TuringMachine<5> tm ( 9, 0, 9, 1, 11, 2, 5, 3, 20, 4, 16, 5, 27, 7, 29, 8, 12, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 9, 1, 11, 2, 5, 3, 23, 4, 16, 5, 27, 7, 29, 8, 12, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  (9, 0, 9, 1, 11, 2, 5, 3, 20, 4, 16, 5, 27, 7, 29, 8, 12, 9, 1)
  (0,0)->(1,1,0)
  (0,1)->(1,1,2)
  (1,0)->(0,1,2)
  (1,1)->(3,0,2)
  (2,0)->(2,1,1)
  (2,1)->(4,1,0)
  (3,1)->(4,1,2)
  (4,0)->(2,0,0)
  (4,1)->(0,0,1)
  3 17
  (9, 0, 9, 1, 11, 2, 5, 3, 23, 4, 16, 5, 27, 7, 29, 8, 12, 9, 1)
  (0,0)->(1,1,0)
  (0,1)->(1,1,2)
  (1,0)->(0,1,2)
  (1,1)->(3,1,2)
  (2,0)->(2,1,1)
  (2,1)->(4,1,0)
  (3,1)->(4,1,2)
  (4,0)->(2,0,0)
  (4,1)->(0,0,1)
  -1 1
  */

  //{TuringMachine<5> tm ( 9, 0, 6, 1, 7, 2, 2, 3, 20, 4, 14, 5, 24, 7, 26, 8, 12, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}

  /* 4.5m
    {TuringMachine<5> tm ( 9, 0, 9, 1, 8, 2, 2, 3, 20, 4, 16, 5, 27, 7, 26, 8, 15, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
    {TuringMachine<5> tm ( 9, 0, 9, 1, 8, 2, 2, 3, 23, 4, 16, 5, 27, 7, 26, 8, 15, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  */

  /*

  {TuringMachine<5> tm ( 9, 0, 6, 1, 8, 2, 5, 3, 20, 4, 16, 5, 24, 7, 29, 8, 12, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 6, 1, 8, 2, 5, 3, 20, 4, 16, 5, 24, 7, 29, 8, 15, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 6, 1, 8, 2, 5, 3, 20, 4, 16, 5, 27, 7, 29, 8, 12, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 6, 1, 8, 2, 5, 3, 20, 4, 16, 5, 27, 7, 29, 8, 15, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 6, 1, 8, 2, 5, 3, 23, 4, 16, 5, 24, 7, 29, 8, 12, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 6, 1, 8, 2, 5, 3, 23, 4, 16, 5, 24, 7, 29, 8, 15, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 6, 1, 8, 2, 5, 3, 23, 4, 16, 5, 27, 7, 29, 8, 12, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 6, 1, 8, 2, 5, 3, 23, 4, 16, 5, 27, 7, 29, 8, 15, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 9, 1, 8, 2, 5, 3, 20, 4, 16, 5, 24, 7, 29, 8, 12, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 9, 1, 8, 2, 5, 3, 20, 4, 16, 5, 24, 7, 29, 8, 15, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 9, 1, 8, 2, 5, 3, 20, 4, 16, 5, 27, 7, 29, 8, 12, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 9, 1, 8, 2, 5, 3, 20, 4, 16, 5, 27, 7, 29, 8, 15, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 9, 1, 8, 2, 5, 3, 23, 4, 16, 5, 24, 7, 29, 8, 12, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 9, 1, 8, 2, 5, 3, 23, 4, 16, 5, 24, 7, 29, 8, 15, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 9, 1, 8, 2, 5, 3, 23, 4, 16, 5, 27, 7, 29, 8, 12, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  {TuringMachine<5> tm ( 9, 0, 9, 1, 8, 2, 5, 3, 23, 4, 16, 5, 27, 7, 29, 8, 15, 9, 1); std::cout << tm;long ones = tm.start ();std::cout << ones << " " << tm.step_counter+1 << std::endl;}
  */
  /*
  (9, 0, 6, 1, 8, 2, 5, 3, 20, 4, 16, 5, 24, 7, 29, 8, 12, 9, 1)
  (0,0)->(1,0,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,0,2)
  (2,0)->(2,1,1)
  (2,1)->(4,0,0)
  (3,1)->(4,1,2)
  (4,0)->(2,0,0)
  (4,1)->(0,0,1)
  0 5
  (9, 0, 6, 1, 8, 2, 5, 3, 20, 4, 16, 5, 24, 7, 29, 8, 15, 9, 1)
  (0,0)->(1,0,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,0,2)
  (2,0)->(2,1,1)
  (2,1)->(4,0,0)
  (3,1)->(4,1,2)
  (4,0)->(2,1,0)
  (4,1)->(0,0,1)
  0 5
  (9, 0, 6, 1, 8, 2, 5, 3, 20, 4, 16, 5, 27, 7, 29, 8, 12, 9, 1)
  (0,0)->(1,0,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,0,2)
  (2,0)->(2,1,1)
  (2,1)->(4,1,0)
  (3,1)->(4,1,2)
  (4,0)->(2,0,0)
  (4,1)->(0,0,1)
  0 5
  (9, 0, 6, 1, 8, 2, 5, 3, 20, 4, 16, 5, 27, 7, 29, 8, 15, 9, 1)
  (0,0)->(1,0,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,0,2)
  (2,0)->(2,1,1)
  (2,1)->(4,1,0)
  (3,1)->(4,1,2)
  (4,0)->(2,1,0)
  (4,1)->(0,0,1)
  0 5
  (9, 0, 6, 1, 8, 2, 5, 3, 23, 4, 16, 5, 24, 7, 29, 8, 12, 9, 1)
  (0,0)->(1,0,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,1,2)
  (2,0)->(2,1,1)
  (2,1)->(4,0,0)
  (3,1)->(4,1,2)
  (4,0)->(2,0,0)
  (4,1)->(0,0,1)
  1 5
  (9, 0, 6, 1, 8, 2, 5, 3, 23, 4, 16, 5, 24, 7, 29, 8, 15, 9, 1)
  (0,0)->(1,0,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,1,2)
  (2,0)->(2,1,1)
  (2,1)->(4,0,0)
  (3,1)->(4,1,2)
  (4,0)->(2,1,0)
  (4,1)->(0,0,1)
  1 5
  (9, 0, 6, 1, 8, 2, 5, 3, 23, 4, 16, 5, 27, 7, 29, 8, 12, 9, 1)
  (0,0)->(1,0,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,1,2)
  (2,0)->(2,1,1)
  (2,1)->(4,1,0)
  (3,1)->(4,1,2)
  (4,0)->(2,0,0)
  (4,1)->(0,0,1)
  1 5
  (9, 0, 6, 1, 8, 2, 5, 3, 23, 4, 16, 5, 27, 7, 29, 8, 15, 9, 1)
  (0,0)->(1,0,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,1,2)
  (2,0)->(2,1,1)
  (2,1)->(4,1,0)
  (3,1)->(4,1,2)
  (4,0)->(2,1,0)
  (4,1)->(0,0,1)
  1 5
  (9, 0, 9, 1, 8, 2, 5, 3, 20, 4, 16, 5, 24, 7, 29, 8, 12, 9, 1)
  (0,0)->(1,1,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,0,2)
  (2,0)->(2,1,1)
  (2,1)->(4,0,0)
  (3,1)->(4,1,2)
  (4,0)->(2,0,0)
  (4,1)->(0,0,1)

  -1 1
  (9, 0, 9, 1, 8, 2, 5, 3, 20, 4, 16, 5, 24, 7, 29, 8, 15, 9, 1)
  (0,0)->(1,1,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,0,2)
  (2,0)->(2,1,1)
  (2,1)->(4,0,0)
  (3,1)->(4,1,2)
  (4,0)->(2,1,0)
  (4,1)->(0,0,1)
  -1 1
  (9, 0, 9, 1, 8, 2, 5, 3, 20, 4, 16, 5, 27, 7, 29, 8, 12, 9, 1)
  (0,0)->(1,1,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,0,2)
  (2,0)->(2,1,1)
  (2,1)->(4,1,0)
  (3,1)->(4,1,2)
  (4,0)->(2,0,0)
  (4,1)->(0,0,1)
  2 18
  (9, 0, 9, 1, 8, 2, 5, 3, 20, 4, 16, 5, 27, 7, 29, 8, 15, 9, 1)
  (0,0)->(1,1,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,0,2)
  (2,0)->(2,1,1)
  (2,1)->(4,1,0)
  (3,1)->(4,1,2)
  (4,0)->(2,1,0)
  (4,1)->(0,0,1)
  -1 1
  (9, 0, 9, 1, 8, 2, 5, 3, 23, 4, 16, 5, 24, 7, 29, 8, 12, 9, 1)
  (0,0)->(1,1,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,1,2)
  (2,0)->(2,1,1)
  (2,1)->(4,0,0)
  (3,1)->(4,1,2)
  (4,0)->(2,0,0)
  (4,1)->(0,0,1)
  -1 1
  (9, 0, 9, 1, 8, 2, 5, 3, 23, 4, 16, 5, 24, 7, 29, 8, 15, 9, 1)
  (0,0)->(1,1,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,1,2)
  (2,0)->(2,1,1)
  (2,1)->(4,0,0)
  (3,1)->(4,1,2)
  (4,0)->(2,1,0)
  (4,1)->(0,0,1)
  -1 1
  (9, 0, 9, 1, 8, 2, 5, 3, 23, 4, 16, 5, 27, 7, 29, 8, 12, 9, 1)
  (0,0)->(1,1,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,1,2)
  (2,0)->(2,1,1)
  (2,1)->(4,1,0)
  (3,1)->(4,1,2)
  (4,0)->(2,0,0)
  (4,1)->(0,0,1)
  3 15
  (9, 0, 9, 1, 8, 2, 5, 3, 23, 4, 16, 5, 27, 7, 29, 8, 15, 9, 1)
  (0,0)->(1,1,0)
  (0,1)->(1,0,2)
  (1,0)->(0,1,2)
  (1,1)->(3,1,2)
  (2,0)->(2,1,1)
  (2,1)->(4,1,0)
  (3,1)->(4,1,2)
  (4,0)->(2,1,0)
  (4,1)->(0,0,1)
  -1 1
   */


  /*
   * halting
   *
   * TM:  50, -2,6(161) , -2,7(3) , -2,8(3) , -2,9(3) , -2,11(30) , 0,6(6469) , 0,8(3) , 0,9(7912) , 0,10(2) , 0,11(7) , 1,7(9) , 1,8(1584) , 1,11(3055) , 2,0(2) , 2,1(1) , 2,2(2801) , 2,3(2) , 2,4(2) , 2,5(5186) , 3,18(5) , 3,20(5633) , 3,21(6) , 3,22(36) , 3,23(5623) , 4,14(1241) , 4,16(1234) , 4,17(1058) , 5,24(4974) , 5,25(2) , 5,26(1) , 5,27(6071) , 5,28(2) , 5,29(1) , 7,24(2) , 7,25(6) , 7,26(4958) , 7,27(1) , 7,28(1) , 7,29(6085) , 8,12(4980) , 8,13(1) , 8,14(13) , 8,15(6055) , 8,16(2) , 8,17(2) , 9,0(1) , 9,1(11039) , 9,2(2) , 9,3(1) , 9,5(6)
  TM: (sort)  50, 9, 1, 0, 9, 0, 6, 7, 29, 5, 27, 8, 15, 3, 20, 3, 23, 2, 5, 8, 12, 5, 24, 7, 26, 1, 11, 2, 2, 1, 8, 4, 14, 4, 16, 4, 17, -2, 6, 3, 22, -2, 11, 8, 14, 1, 7, 0, 11, 7, 25, 9, 5, 3, 21, 3, 18, -2, 7, -2, 8, -2, 9, 0, 8, 5, 28, 5, 25, 9, 2, 8, 17, 8, 16, 2, 4, 0, 10, 2, 0, 2, 3, 7, 24, 8, 13, 5, 29, 7, 28, 7, 27, 2, 1, 9, 0, 5, 26, 9, 3

   *
   *
   TM:  50, -2,6(536) , -2,7(271) , -2,8(271) , -2,9(270) , -2,11(270) , 0,6(86388) , 0,8(3) , 0,9(1740) , 0,10(2) , 0,11(3) , 1,7(9) , 1,8(26780) , 1,11(1966) , 2,0(2) , 2,1(1) , 2,2(46521) , 2,3(2) , 2,4(2) , 2,5(2590) , 3,18(2) , 3,20(67342) , 3,21(3) , 3,22(36) , 3,23(2091) , 4,14(19072) , 4,16(1451) , 4,17(1447) , 5,24(66010) , 5,25(2) , 5,26(1) , 5,27(1765) , 5,28(2) , 5,29(1) , 7,24(2) , 7,25(6) , 7,26(65377) , 7,27(1) , 7,28(1) , 7,29(2391) , 8,12(66100) , 8,13(1) , 8,14(5) , 8,15(1672) , 8,16(2) , 8,17(2) , 9,0(1) , 9,1(67763) , 9,2(2) , 9,3(1) , 9,5(8)
   TM: (sort)  50, 0, 6, 9, 1, 3, 20, 8, 12, 5, 24, 7, 26, 2, 2, 1, 8, 4, 14, 2, 5, 7, 29, 3, 23, 1, 11, 5, 27, 0, 9, 8, 15, 4, 16, 4, 17, -2, 6, -2, 7, -2, 8, -2, 9, -2, 11, 3, 22, 1, 7, 9, 5, 7, 25, 8, 14, 3, 21, 0, 8, 0, 11, 5, 28, 3, 18, 9, 2, 2, 4, 8, 17, 8, 16, 2, 3, 2, 0, 5, 25, 0, 10, 7, 24, 8, 13, 2, 1, 7, 28, 7, 27, 9, 0, 5, 26, 9, 3, 5, 29


  TuringMachine<5> tm ( 9,0, 6, 3, 20, 9, 1, 8, 12, 5, 24, 7, 26, 2, 2, 1, 8, 4, 14);
  */

  /*
  * halting branch
  *                           0, 9, 3, 20, 8, 15, 9, 1, 5, 27, 2, 5, 7, 25, 1, 7, 4, 17
  *                           0, 9, 3, 20, 8, 15, 5, 27, 9, 1, 2, 5, 7, 25, 1, 7, 4, 17
  */


  /*
   *
   * TM:  58, -2,-1(17119) , -2,6(67) , -2,7(52) , -2,8(60) , -2,9(36) , -2,11(44) , 0,6(98018) , 0,7(24) , 0,8(70) , 0,9(96862) , 0,10(78) , 0,11(82) , 1,6(4) , 1,7(248) , 1,8(31025) , 1,9(6) , 1,10(2) , 1,11(31086) , 2,0(37) , 2,1(36) , 2,2(53933) , 2,3(27) , 2,4(41) , 2,5(53808) , 3,18(30) , 3,19(2) , 3,20(76057) , 3,21(34) , 3,22(453) , 3,23(76811) , 4,12(25) , 4,14(15732) , 4,15(18) , 4,16(15732) , 4,17(15732) , 5,24(74276) , 5,25(32) , 5,26(21) , 5,27(75192) , 5,28(45) , 5,29(23) , 7,24(68) , 7,25(51) , 7,26(74263) , 7,27(67) , 7,28(43) , 7,29(75133) , 8,12(74689) , 8,13(19) , 8,14(92) , 8,15(74661) , 8,16(98) , 8,17(82) , 9,0(24) , 9,1(149297) , 9,2(106) , 9,3(25) , 9,5(96)
  TM: (sort)  58, 9, 1, 0, 6, 0, 9, 3, 23, 3, 20, 5, 27, 7, 29, 8, 12, 8, 15, 5, 24, 7, 26, 2, 2, 2, 5, 1, 11, 1, 8, -2, -1, 4, 17, 4, 16, 4, 14, 3, 22, 1, 7, 9, 2, 8, 16, 9, 5, 8, 14, 8, 17, 0, 11, 0, 10, 0, 8, 7, 24, -2, 6, 7, 27, -2, 8, -2, 7, 7, 25, 5, 28, -2, 11, 7, 28, 2, 4, 2, 0, -2, 9, 2, 1, 3, 21, 5, 25, 3, 18, 2, 3, 4, 12, 9, 3, 0, 7, 9, 0, 5, 29, 5, 26, 8, 13, 4, 15, 1, 9, 1, 6, 3, 19, 1, 10
  */

  // 9, 1, 0, 9, 0, 6, 7, 29, 8, 12, 3, 20, 3, 23, 5, 27, 5, 24, 8, 15, 7, 26, 2, 5, 2, 2, 1, 8, 1, 11, 4, 14, 4, 17,
  // ->
  // 9, 1, 0, 9, 7, 29, 8, 12, 3, 20, 5, 27, 5, 24, 8, 15,  2, 5,  1, 8, 1, 11, 4, 14, 4, 17,

  // 3, 23, 5, 27, 4, 16
  // 3, 23, 5, 27,
  // 3, 23, 7, 26, 5, 27,
  // 3, 23, 5, 27, 7, 26,

  // 5, 27,    8, 12,   1, 8, ,

  /*
   Azért nem tanulja meg, meg az N adta kvótát kilövi az elején a gép működésével, amikor a végén
   megtanulná, akkor már nem választódik ki: új branch, amelyben N - helyett vagy emllett random, pl
   minden 10. alkalommal maxreward-ot adjon vissza
   */

  //TuringMachine<5> tm ( 9, 0, 9, 9, 1, 7, 29, 5, 24, 8, 12, 3, 20, 2, 5, 1, 11, 4, 16);
  //TuringMachine<5> tm ( 9, 0, 6, 3, 20, 9, 1, 5, 24, 8, 15, 7, 26, 2, 2, 1, 11, 4, 16);
  //TuringMachine<5> tm ( 9, 0, 9, 9, 1, 5, 24, 7, 29, 8, 15, 3, 20, 2, 5, 1, 11, 4, 16); //4->16 helyett kéne 4->17
  //0, 9, 3, 23, 5, 27, 7, 29, 9, 1, 8, 15, 2, 5, 1, 11, 4, 16
  //0, 6, 3, 20, 9, 1, 5, 27, 7, 29, 8, 12, 2, 5, 1, 11, 4, 17

//  std::cout << tm;


  //-1
  //TuringMachine<5> tm ( 9, 0, 6, 3, 23, 9, 1, 7, 26, 5, 24, 8, 15, 2, 2, 1, 11, 4, 14);
  //TuringMachine<5> tm ( 9, 0, 9, 9, 1,  5, 24, 7, 26, 3, 22, 8, 15, 2, 5, 1, 8, 4, 17);


  // 0 5
  //TuringMachine<5> tm ( 9, 0, 6, 8, 12, 7, 29, 5, 24, 9, 1, 3, 20, 2, 5, 1, 8, 4, 17);
  // 0 5
  //TuringMachine<5> tm ( 9, 0, 6, 8, 12, 7, 26, 5, 24, 9, 1, 3, 20, 2, 5, 1, 8, 4, 14);
  // 0 5
  //TuringMachine<5> tm ( 9, 0, 6, 8, 12, 7, 26, 5, 27, 9, 1, 3, 20, 2, 5, 1, 8, 4, 17);
  // 0 5
  //TuringMachine<5> tm ( 9, 0, 6, 8, 12, 5, 24, 7, 29, 9, 1, 3, 20, 2, 5, 1, 8, 4, 17);




  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 7, 26, 9, 1,  5, 27, 8, 12, 2, 5,  1, 7,  4, 17);
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 5, 27, 7, 26, 9, 1,  8, 12, 2, 2,  1, 7,  4, 17);
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 8, 12, 5, 27, 9, 1,  2, 5,  1, 7,  7, 24, 4, 17); //ua
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 5, 24, 9, 1,  8, 15, 2, 5,  7, 24, 1, 7,  4, 17); //ua
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 9, 1, 8, 15,  5, 24, 2, 5,  7, 25, 1, 7,  4, 17); //ua
  //TuringMachine<5> tm ( 9, 0, 9, 5, 27, 9, 1, 3, 22,  8, 12, 7, 26, 2, 2,  1, 11, 4, 17);




  //-1
  //TuringMachine<5> tm ( 9, 0, 9, 9, 1, 5, 24, 3, 22, 2, 5, 7, 26, 8, 15, 1, 7, 4, 17); // ua h 3 20 7 29 1 11
  //-1
  //TuringMachine<5> tm ( 9, 0, 9, 3, 23, 9, 1, 8, 12, 5, 24, 7, 29, 2, 5, 1, 11, 4, 14); //ua
  // 0 5
  //TuringMachine<5> tm ( 9, 0, 6, 3, 20, 9, 1, 7, 26, 5, 27, 2, 5, 8, 15, 1, 11, 4, 16);


  //TuringMachine<5> tm ( 9, 3, 20,8, 15, 5, 24, 7, 26, 0, 8,  9, 5, 2, 5,  1, 7, 4, 17); // 0 - ez nem "tanulta meg"
  //TuringMachine<5> tm ( 9, 3, 20,8, 15, 5, 24, 7, 26, 0, 8,  9, 5, 2, 5,  1, 7, 4, 17); // 1
  //TuringMachine<5> tm ( 9, 3, 20,5, 24, 7, 29, 0, 8,  9, 5,  2, 5, 8, 14, 1, 8, 4, 17); // 2
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 9, 1,  5, 27, 8, 15, 2, 5, 7, 25, 1, 7, 4, 17); // 3
  //TuringMachine<5> tm ( 9, 0, 9, 3, 22, 7, 29, 8, 15, 5, 24, 9, 2, 2, 5,  1, 8, 4, 17); // 4
  //TuringMachine<5> tm ( 9, 0, 6, 3, 20, 8, 15, 5, 24, 7, 29, 9, 5, 2, 5,  1, 8, 4, 17); // 6
  //TuringMachine<5> tm ( 9, 0, 6, 3, 22, 7, 26, 9, 1,  5, 24, 2, 5, 8, 17, 1, 8, 4, 17); // 8

  //-1
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 9, 1, 5, 27, 8, 15, 2, 5, 7, 25, 1, 7, 4, 17);

  //0, 9, 3, 20, 9, 1, 5, 27, 8, 15, 2, 5, 7, 25, 1, 7, 4, 17
  //0, 9, 3, 20, 5, 27, 8, 15, 7, 26, 9, 2, 2, 5, 1, 7, 4, 17

  //-1
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 8, 15, 5, 24, 9, 1, 7, 26, 2, 5, 1, 8, 4, 17); // 7, 29, 1, 11

  //1 5
  //TuringMachine<5> tm ( 9, 0, 6, 3, 23, 5, 27, 8, 15, 9, 1, 7, 29, 2, 5, 1, 11, 4, 17);

  //0, 6, 3, 20, 5, 24, 8, 12, 7, 29, 9, 1, 2, 5, 1, 11, 4, 17
  //0 5
  //TuringMachine<5> tm ( 9, 0, 6, 3, 20, 5, 24, 8, 12, 7, 29, 9, 1, 2, 5, 1, 11, 4, 17);
  // 0 5
  //TuringMachine<5> tm ( 9, 0, 6, 3, 20, 8, 12, 9, 1, 7, 26, 5, 24, 2, 5, 1, 11, 4, 17);
  //0, 9, 3, 20, 8, 12, 9, 1, 5, 24, 7, 26, 2, 5, 1, 11, 4, 17
  //0, 9, 3, 20, 8, 12, 5, 24, 9, 1, 7, 26, 2, 5, 1, 11, 4, 17
  //0, 9, 3, 20, 8, 12, 5, 24, 7, 29, 9, 1, 2, 5, 1, 11, 4, 17
  // -1
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 9, 1,  7, 29, 8, 12, 5, 24, 2, 5, 1, 11, 4, 17);
  //0, 9, 3, 20, 8, 12, 5, 24, 7, 29, 9, 1, 2, 5, 1, 11, 4, 17
  //-1
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 8, 12, 5, 24, 7, 29, 9, 1,  2, 5, 1, 11, 4, 17);
  // rew. 0, 9, 3, 20, 7, 29, 9, 1,  8, 12, 5, 24, 2, 5, 1, 11, 4, 17
  // -1
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 7, 26, 9, 1,  8, 12, 5, 24, 2, 5, 1, 11, 4, 17);
  //                 nondet  0, 9, 3, 20, 7, 26, 8, 12, 5, 24, 9, 1,  2, 5, 1, 11, 1, 8
  // ua (67)
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 8, 12, 7, 26, 5, 24, 9, 1,  2, 5, 1, 11, 4, 17);
  // -1 (77)
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 8, 12, 5, 24, 7, 26, 9, 1,  2, 5, 1, 11, 4, 17);
  //0 5
  //TuringMachine<5> tm ( 9, 0, 6, 3, 20, 7, 29, 9, 1,  8, 12, 5, 24, 2, 5, 1, 11, 1, 8);
  // -1, volt
  //TuringMachine<5> tm ( 9, 0, 6, 3, 20, 8, 12, 5, 24, 7, 26, 9, 1,  2, 5, 1, 11, 4, 17);
  //-1
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 7, 29, 9, 1,  8, 12, 5, 24, 2, 5, 1, 11, 4, 17);
  //-1
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 8, 12, 5, 24, 7, 26, 9, 1,  2, 5, 1, 8,  4, 17);
  //-1
  //TuringMachine<5> tm ( 9, 0, 9, 3, 20, 9, 1,  8, 12, 7, 29, 5, 24, 2, 5, 1, 8,  4, 17);
  //-1
  //TuringMachine<5> tm ( 9, 0, 6, 3, 20, 9, 1,  8, 12, 7, 26, 5, 24, 2, 2, 1, 8,  4, 14);
  //0 5
  //TuringMachine<5> tm ( 9, 0, 6, 3, 20, 8, 12, 5, 24, 7, 26, 9, 1,  2, 5, 1, 11, 4, 17);
  //0 5
  //TuringMachine<5> tm ( 9, 0, 6, 3, 20, 9, 1,  8, 15, 7, 26, 5, 27, 2, 5, 1, 11, 4, 17);
  // ---
  //0 5
  // TuringMachine<5> tm ( 9, 0, 6, 1, 11, 2, 5, 3, 20 ,4, 17, 5, 24, 7, 26, 8, 12, 9, 1 );
  //-1
  // TuringMachine<5> tm ( 9, 0, 6, 1, 8,  2, 2, 3, 20, 4, 14, 5, 24, 7, 26, 8, 12, 9, 1 );
  //-1
  // TuringMachine<5> tm ( 9, 0, 9, 1, 11, 2, 5, 3, 20, 4, 17, 5, 24, 7, 26, 8, 12, 9, 1 );
  //-1
  // TuringMachine<5> tm ( 9, 0, 6, 1, 7,  2, 2, 3, 20, 4, 14, 5, 24, 7, 26, 8, 12, 9, 1 );
  //14 314
  // TuringMachine<5> tm ( 9, 0, 9, 1, 11, 2, 5, 3, 20, 4, 17, 5, 24, 7, 29, 8, 15, 9, 1 );

  /*
  long ones = tm.start ();
  std::cout << ones << " " << tm.step_counter+1 << std::endl;
  */
  return 0;
}

