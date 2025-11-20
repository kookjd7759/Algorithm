# [Silver V] skittles - 34432 

[문제 링크](https://www.acmicpc.net/problem/34432) 

### 성능 요약

메모리: 3680 KB, 시간: 12 ms

### 분류

구현

### 제출 일자

2025년 11월 20일 10:20:51

### 문제 설명

<p>[Megan's favorite type of candy is Skittles. She likes every single one of the Skittles flavors, and can't decide which one she likes the best. Because of this, she likes eating her Skittles in batches containing one Skittle of each flavor. Unfortunately, most of the time, the bag of Skittles that she gets doesn't have the same number of each Skittle flavor. In these cases, she eats as many batches with all five flavors as possible. Then, when she can no longer eat a batch containing all five flavors, she eats as many batches as possible with four flavors. She continues in this manner until all the Skittles in the bag are gone.</p>

<p>For example, assume Megan's bag of Skittles has six green (<code>G</code>) Skittles, two orange (<code>O</code>) Skittles, two purple (<code>P</code>) Skittles, two red (<code>D</code>) Skittles, and three yellow (<code>Y</code>) Skittles. Then she can have</p>

<ul>
	<li>two batches consisting of all five Skittle flavors (<code>R</code>, <code>O</code>, <code>Y</code>, <code>G</code>, and <code>P</code>),</li>
	<li>zero batches consisting of four different flavors,</li>
	<li>zero batches consisting of three different flavors,</li>
	<li>one batch consisting of two different flavors (<code>Y</code> and <code>G</code>), and</li>
	<li>three batches consisting of a single flavor (<code>G</code>).</li>
</ul>

<p>The sample input below represents the situation above.</p>

<p>In this problem, determine how many batches of each size Megan will be able to eat as well as what Skittles will be included in each batch of that size.</p>

### 입력 

 <p>The input consists of a single line with a single string that represents all of the Skittles in the bag that Megan plans to eat. The string consists entirely of "R", "O", "Y", "G", "P" characters representing "red", "orange", "yellow", "green", and "purple" Skittles, respectively. The string is not necessary sorted. The number of Skittles (and therefore characters in the string) will be between <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1$</span></mjx-container> and <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1\,000\,000$</span></mjx-container>, inclusive.</p>

### 출력 

 <p>The output consists of five lines containing two values: an integer and a string.  The integer represents how many batches of the given size that can be eaten, and the string represents the colors present in each batch of that size. The <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msup><mjx-texatom texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-texatom><mjx-script style="vertical-align: 0.363em;"><mjx-texatom size="s" texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D461 TEX-I"></mjx-c></mjx-mi><mjx-mi class="mjx-i"><mjx-c class="mjx-c210E TEX-I"></mjx-c></mjx-mi></mjx-texatom></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msup><mrow data-mjx-texclass="ORD"><mi>n</mi></mrow><mrow data-mjx-texclass="ORD"><mi>t</mi><mi>h</mi></mrow></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">${n}^{th}$</span></mjx-container> line represents how many batches of size <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c35"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="3"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>5</mn><mo>−</mo><mo stretchy="false">(</mo><mi>n</mi><mo>−</mo><mn>1</mn><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$5 - (n - 1)$</span></mjx-container> Megan can eat. (In other words, the lines are sorted by the batch size, descending.)</p>

<p>The color characters in the output must be sorted in the following order: <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D445 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D442 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D44C TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D43A TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D443 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>R</mi><mo><</mo><mi>O</mi><mo><</mo><mi>Y</mi><mo><</mo><mi>G</mi><mo><</mo><mi>P</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$R<O<Y<G<P$</span></mjx-container>.</p>

