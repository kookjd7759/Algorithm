# [Bronze II] Leg Day - 32571 

[문제 링크](https://www.acmicpc.net/problem/32571) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2025년 11월 21일 16:25:13

### 문제 설명

<p>You have been given a new training plan for the month, consisting of days focusing on legs or arms interspersed with rest days. This training plan will be repeated for as any times as necessary to get to the end of the month.</p>

<p>Each day of the training plan either contains the word "rest", in which case it is a rest day, or if not may still contain "leg", in which case it is a leg day, or contains neither, meaning that of course it is an arm day.</p>

<p>Produce a motivational 31-day calendar, starting on a Monday, showing what types of exercises you will do on each day.</p>

### 입력 

 <ul>
	<li>One line containing the number of exercises, $n$ ($1 \le n \le 31$).</li>
	<li>$n$ further lines, the $i$th of which contains the name of the $i$th exercise as between $1$ and $50$ lowercase Latin characters.</li>
</ul>

### 출력 

 <p>Output 5 rows of UTF-8 text, each containing:</p>

<ul>
	<li>the <strong>week number</strong> (from 1 to 5)</li>
	<li>Up to 7 pictographs representing the 31 days of the training plan, using glyphs from</li>
	<li>the Unicode "Supplementary Multilingual Plane" to illustrate the exercises.</li>
</ul>

<p>You may use any appropriate character as long as the name is a faithful illustration of the exercise, according to the Unicode 17.0 specification. This will be judged as follows:</p>

<ul>
	<li>The character must be printable</li>
	<li>For leg days, the name of the character must include "leg"</li>
	<li>For arm days, the name of the character must include "arm" or "biceps"</li>
	<li>For rest days, the name of the character must include "face"</li>
</ul>

<p>For good training results, consistency is key: if you use a character to illustrate a type of activity once, you must always use it to represent that type of activity, and no other type of activity.</p>

