# [Bronze II] brokenclock - 34425 

[문제 링크](https://www.acmicpc.net/problem/34425) 

### 성능 요약

메모리: 2020 KB, 시간: 24 ms

### 분류

구현, 많은 조건 분기

### 제출 일자

2025년 11월 6일 11:27:01

### 문제 설명

<p>For your birthday you asked for a new digital clock which shows the time as the <em>UNIX Timestamp</em> which is defined as the number of seconds from the UNIX epoch (00:00:00 on January 1, 1970). Unfortunately, instead of the cool clock that you wanted, you were given a normal digital clock which shows the time in <code>HH:MM:SS</code> format. You were so disappointed after receiving your new clock that you threw it in the air and it landed on the floor with a crash! After apologizing to the people that gave you the gift, you realize that the clock is not totally broken. Some of the bars (segments) on the display are broken and are permanently off and won't turn on. While others work properly and turn on and off as expected.</p>

<p>Because you still want to be able to tell the time, you decide to write a program to figure out what times the clock could be displaying.</p>

<p>The clock is laid out as follows. There are 6 digits on your clock. Every two digits is separated by a colon creating three digit groups representing the hours, minutes, and seconds of the time, respectively. The time is displayed in <code>HH:MM:SS</code> format where</p>

<ul>
	<li><code>HH</code> is the hours in 24 hour format (meaning that the hours range from <code>00</code> to <code>23</code>), with a leading zero if the hours part of the time is only a single digit.</li>
	<li><code>MM</code> is the minutes, with a leading zero if the minutes part of the time is only a single digit.</li>
	<li><code>SS</code> is the seconds, with a leading zero if the seconds part of the time is only a single digit.</li>
</ul>

<p>Each digit has seven <em>segments</em> which can either be on, off, or broken. The segment layout for a single digit and the corresponding segment numbers are shown in Figure 1.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/5951e530-6acb-4efc-8819-eb40afa9e83e/-/preview/" style="width: 116px; height: 150px;"></p>

<p style="text-align: center;"><strong>Figure 1</strong>: Segment numbers for a single digit of a seven-segment display.</p>

<p>If all of the segments of a digit are not broken, then the numbers 0 through 9 are displayed by illuminating the segments as shown in Figure 2.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/f5959280-b8d1-429d-a77f-c18b74e9bdea/-/preview/" style="width: 500px; height: 100px;"></p>

<p style="text-align: center;"><strong>Figure 2</strong>: All of the possible numbers for a given digit. <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mtext class="mjx-n"><mjx-c class="mjx-c52"></mjx-c><mjx-c class="mjx-c65"></mjx-c><mjx-c class="mjx-c64"></mjx-c></mjx-mtext><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mtext class="mjx-n" space="4"><mjx-c class="mjx-c6F"></mjx-c><mjx-c class="mjx-c6E"></mjx-c></mjx-mtext></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mtext>Red</mtext><mo>=</mo><mtext>on</mtext></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$\text{Red}=\text{on}$</span></mjx-container>, <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mtext class="mjx-n"><mjx-c class="mjx-c47"></mjx-c><mjx-c class="mjx-c72"></mjx-c><mjx-c class="mjx-c65"></mjx-c><mjx-c class="mjx-c79"></mjx-c></mjx-mtext><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mtext class="mjx-n" space="4"><mjx-c class="mjx-c6F"></mjx-c><mjx-c class="mjx-c66"></mjx-c><mjx-c class="mjx-c66"></mjx-c></mjx-mtext></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mtext>Grey</mtext><mo>=</mo><mtext>off</mtext></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$\text{Grey}=\text{off}$</span></mjx-container>.</p>

### 입력 

 <p>There are six lines of input. The <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msup><mjx-texatom texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-texatom><mjx-script style="vertical-align: 0.363em;"><mjx-texatom size="s" texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D461 TEX-I"></mjx-c></mjx-mi><mjx-mi class="mjx-i"><mjx-c class="mjx-c210E TEX-I"></mjx-c></mjx-mi></mjx-texatom></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msup><mrow data-mjx-texclass="ORD"><mi>n</mi></mrow><mrow data-mjx-texclass="ORD"><mi>t</mi><mi>h</mi></mrow></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">${n}^{th}$</span></mjx-container> line of the input represents the states of the segments of the <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msup><mjx-texatom texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-texatom><mjx-script style="vertical-align: 0.363em;"><mjx-texatom size="s" texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D461 TEX-I"></mjx-c></mjx-mi><mjx-mi class="mjx-i"><mjx-c class="mjx-c210E TEX-I"></mjx-c></mjx-mi></mjx-texatom></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msup><mrow data-mjx-texclass="ORD"><mi>n</mi></mrow><mrow data-mjx-texclass="ORD"><mi>t</mi><mi>h</mi></mrow></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">${n}^{th}$</span></mjx-container> digit from the left of the clock. Each line will consist of seven space-separated values representing the states of the seven segments of the corresponding digit. A <code>1</code> indicates that the given segment is "lit". A <code>0</code> indicates that the segment is "off", but not broken. A <code>-</code> indicates that the segment is broken.</p>

<p>You are guaranteed that each of the digits in the display has at least one possible number and that the clock can represent at least one valid 24-hour time.</p>

### 출력 

 <p>Output the possible times that the clock could be displaying in sorted order (least to greatest) with leading zeros in <code>HH:MM:SS</code> format (the same format as described above).</p>

