# [Bronze I] Moonlit Time Machine - 35372 

[문제 링크](https://www.acmicpc.net/problem/35372) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

수학, 구현, 브루트포스 알고리즘, 사칙연산

### 제출 일자

2026년 3월 6일 16:32:08

### 문제 설명

<p>After decades of research in alchemy and magic, you have finally created your magnum opus – a room that, when bathed in the glow of the moon, sends you several days into the future. You have given this room a very classy name: the <i>Moonlit Time Machine</i>.</p>

<p>Whenever you use the time machine, you are projected forward some number of days. You don’t know the number, but you know that it is between <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1$</span></mjx-container> and <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c38"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>28</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$28$</span></mjx-container> (inclusive), and that the number is always the same every time you use the machine. As an alchemist, you wish to find out this number! While there is no technology to tell you the date, you can look at the moon’s cycle. You know that every <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c38"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>28</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$28$</span></mjx-container> days, the moon cycles through a list of phases, as defined below:</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/e0b8d179-3bdb-4a1a-88f3-c6d484312633/-/preview/" style="width: 500px; height: 97px;"></p>

<table class="table table-bordered td-center th-center table-center-20">
<tbody>
<tr>
<td>Day(s)</td>
<td>Phase</td>
</tr>
<tr>
<td>0</td>
<td>New</td>
</tr>
<tr>
<td>1 to 4</td>
<td>Crescent</td>
</tr>
<tr>
<td>5 to 8</td>
<td>Quarter</td>
</tr>
<tr>
<td>9 to 13</td>
<td>Gibbous</td>
</tr>
<tr>
<td>14</td>
<td>Full</td>
</tr>
<tr>
<td>15 to 19</td>
<td>Gibbous</td>
</tr>
<tr>
<td>20 to 22</td>
<td>Quarter</td>
</tr>
<tr>
<td>23 to 27</td>
<td>Crescent</td>
</tr>
</tbody>
</table>

<p>To figure out this number of days, you wait until you see a new moon, then use the time machine several times, recording the moon’s phase after each use. Given your observations, can you determine a possible number of days that the Moonlit Time Machine sends you forward each time?</p>

### 입력 

 <p>The first line of input contains a single integer <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c33"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>3</mn><mo>≤</mo><mi>n</mi><mo>≤</mo><mn>100</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$3 \le n \le 100$</span></mjx-container>), the number of observations you have made.</p>

<p>Each of the next <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> lines contains a single string describing an observed phase of the moon. Each string is one of <code>New</code>, <code>Crescent</code>, <code>Quarter</code>, <code>Gibbous</code>, or <code>Full</code>, with its first letter capitalized and the remaining letters lowercase. It is guaranteed that these are valid observed phases of the moon after using your time machine.</p>

### 출력 

 <p>Output a single integer, the number of days the Moonlit Time Machine sends you into the future with each use. If there are multiple answers, output the smallest one. It is guaranteed that at least one valid answer exists.</p>

