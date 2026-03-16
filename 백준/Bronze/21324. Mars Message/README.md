# [Bronze I] Mars Message - 21324 

[문제 링크](https://www.acmicpc.net/problem/21324) 

### 성능 요약

메모리: 2156 KB, 시간: 20 ms

### 분류

수학, 구현, 문자열, 사칙연산

### 제출 일자

2026년 3월 16일 15:34:29

### 문제 설명

<p>In the film <em>The Martian</em>, astronaut Mark Watney is stuck on Mars, and communicates with earth by rotating a camera on an old space prod.</p>

<p>The prod points at a hexidecimal digit, i.e. <code>0-9</code> or <code>a-f</code>, and Mark creates letters and other characters by converting a pair of hexadecimal digits according to ASCII encoding. To determine which digit the prod is pointing at Mark has divided a circle of 360 degrees into 16 parts of 22.5 degrees each.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/41c226d1-f550-4b6e-9fe2-db5a2d78e14f/-/preview/" style="width: 305px; height: 275px;"></p>

<p>For example, the pair of angles <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2217"></mjx-c></mjx-mo><mjx-texatom space="3" texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c2218"></mjx-c></mjx-mo></mjx-texatom><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-msup space="2"><mjx-mn class="mjx-n"><mjx-c class="mjx-c33"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-texatom size="s" texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c2218"></mjx-c></mjx-mo></mjx-texatom></mjx-script></mjx-msup><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">(</mo><mn>100</mn><mo>∗</mo><mrow data-mjx-texclass="ORD"><mo>∘</mo></mrow><mo>,</mo><msup><mn>30</mn><mrow data-mjx-texclass="ORD"><mo>∘</mo></mrow></msup><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$(100*{\circ}, 30^{\circ})$</span></mjx-container> represents the hexadecimal number 41, which in decimal is <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c36"></mjx-c><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>65</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$65$</span></mjx-container>. According to <a href="https://en.wikipedia.org/wiki/ASCII\#ASCII\_printable\_characters">ASCII</a> that is the character <code>A</code>.</p>

<p>Mark is getting tired of writing down the digits manually, and he asks you to help him decode the messages he receives. You will be given the sequence of angles the prod points at and you're expected to print the message.</p>

### 입력 

 <p>The first line consists of an integer <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c35"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>50</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$2 \le N \le 50\,000$</span></mjx-container>, the number of angles. <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container> will be even.</p>

<p>The following <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container> lines contain angles, one angle per line. An angle is given in degrees as a float in the range <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c5B"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="2"><mjx-c class="mjx-c33"></mjx-c><mjx-c class="mjx-c36"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">[</mo><mn>0</mn><mo>,</mo><mn>360</mn><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$[0, 360)$</span></mjx-container>. The prod will never point at an angle which is exactly inbetween two hexadecial digits.</p>

<p>When decoding to ASCII only characters with decimal values <code>32-126</code> occurs.</p>

### 출력 

 <p>Print one line with the decoded message.</p>

