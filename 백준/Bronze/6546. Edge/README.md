# [Bronze II] Edge - 6546 

[문제 링크](https://www.acmicpc.net/problem/6546) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현, 시뮬레이션

### 제출 일자

2024년 2월 6일 17:23:51

### 문제 설명

<p>For products that are wrapped in small packings it is necessary that the sheet of paper containing the directions for use is folded until its size becomes small enough. We assume that a sheet of paper is rectangular and only folded along lines parallel to its initially shorter edge. The act of folding along such a line, however, can be performed in two directions: either the surface on the top of the sheet is brought together, or the surface on its bottom. In both cases the two parts of the rectangle that are separated by the folding line are laid together neatly and we ignore any differences in thickness of the resulting folded sheet.</p>

<p>After several such folding steps have been performed we may unfold the sheet again and take a look at its longer edge holding the sheet so that it appears as a one-dimensional curve, actually a concatenation of line segments. If we move along this curve in a fixed direction we can classify every place where the sheet was folded as either <em>type A</em> meaning a clockwise turn or <em>type V</em> meaning a counter-clockwise turn. Given such a sequence of classifications, produce a drawing of the longer edge of the sheet assuming 90 degree turns at equidistant places.</p>

### 입력 

 <p>The input contains several test cases, each on a separate line. Each line contains a nonempty string of characters <code>A</code> and <code>V</code> describing the longer edge of the sheet. You may assume that the length of the string is less than 200. The input file terminates immediately after the last test case.</p>

### 출력 

 <p>For each test case generate a PostScript drawing of the edge with commands placed on separate lines. Start every drawing at the coordinates (300,420) with the command "<code>300 420 moveto</code>". The first turn occurs at (310,420) using the command "<code>310 420 lineto</code>". Continue with clockwise or counter-clockwise turns according to the input string, using a sequence of "<em>x</em> <em>y</em> <code>lineto</code>" commands with the appropriate coordinates. The turning points are separated at a distance of 10 units. Do not forget the end point of the edge and finish each test case by the commands <code>stroke</code> and <code>showpage</code>.</p>

<p>You may display such drawings with the <code>gv</code> PostScript interpreter, optionally after a conversion using the <code>ps2ps</code> utility.</p>

