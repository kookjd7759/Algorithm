# [Bronze I] Knowing the Clock - 35214 

[문제 링크](https://www.acmicpc.net/problem/35214) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

수학, 브루트포스 알고리즘, 사칙연산

### 제출 일자

2026년 3월 7일 16:49:33

### 문제 설명

<p>It is the 25th of November, 1625. You have put a lot of time into making a mechanical watch, but you are unsure if the hands are placed correctly. Even a watch that is not running is correct twice a day, but if the hands of the watch do not correspond to a real time, it is never correct at all. Without wasting any more time, you measure the angles of the hands and check whether they correspond to a real time.</p>

<p>For example, consider the first sample input, visualized in Figure K.1: if the minute hand points to a quarter past (90 degrees from 12 o'clock), then the hour hand cannot point exactly to 2 o'clock (60 degrees from 12 o'clock).</p>

<p>You know that both hands of the watch are moving continuously.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/7e8afb2e-7dcb-4660-843c-5f8dea9b2154/-/preview/" style="width: 200px; height: 200px;"> <img alt="" src="https://upload.acmicpc.net/6208e2cd-b7a8-4e42-a3c8-f4f7fafafb85/-/preview/" style="width: 200px; height: 200px;"> <img alt="" src="https://upload.acmicpc.net/63b35880-fe65-45a6-9b29-b5573b8de06c/-/preview/" style="width: 200px; height: 200px;"> <img alt="" src="https://upload.acmicpc.net/4901a7ae-e00f-4439-86f1-d5719d314458/-/preview/" style="width: 200px; height: 200px;"></p>

<p style="text-align: center;">Figure K.1: Illustrations of the sample inputs. The first and third sample inputs <em>do not</em> correspond to a real time. The second and fourth sample inputs <em>do</em> correspond to a real time.</p>

### 입력 

 <p>The input consists of:</p>

<ul>
<li>One line with two integers <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c210E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>h</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$h$</span></mjx-container> and <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45A TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$m$</span></mjx-container> (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c210E TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D45A TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c33"></mjx-c><mjx-c class="mjx-c35"></mjx-c><mjx-c class="mjx-c39"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn><mo>≤</mo><mi>h</mi><mo>,</mo><mi>m</mi><mo>≤</mo><mn>359</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$0 \leq h, m \leq 359$</span></mjx-container>), the exact clockwise angle that the hour hand is from 12 o'clock and the exact clockwise angle that the minute hand is from 12 o'clock. Both angles are given in degrees.</li>
</ul>

### 출력 

 <p>If the angles of the hands correspond to a real time, output "<code>yes</code>". Otherwise, output "<code>no</code>".</p>

