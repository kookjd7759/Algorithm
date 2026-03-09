# [Bronze I] Child's Game with Robot - 31377 

[문제 링크](https://www.acmicpc.net/problem/31377) 

### 성능 요약

메모리: 13676 KB, 시간: 4 ms

### 분류

구현, 애드 혹

### 제출 일자

2026년 3월 9일 15:06:14

### 문제 설명

<p><em>This is an interactive problem.</em></p>

<p>Little Misha plays a child's game with a robot. In this game, the robot stands on a field which is divided into <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c33"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-cD7"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="3"><mjx-c class="mjx-c33"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>3</mn><mo>×</mo><mn>3</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$3 \times 3$</span></mjx-container> squares and surrounded by borders. The game begins at the center squares and consists in making ten actions. Each action is either declamation of a phrase or an attempt to move into one of the neighboring squares. Declamation is used to wait, or simply for amusement.</p>

<p>One of the squares is special, but Misha does not know in advance which one. The robot reports when it moves into the special square. The goal of the game is to move into the special square precisely during the tenth action.</p>

<p>To communicate with the robot, Misha uses text input and output. The following commands are recognized:</p>

<ul>
	<li><code>echo </code><em>phrase</em>  --- declamation of <em>phrase</em>,</li>
	<li><code>move north</code>  --- moving one square to the north,</li>
	<li><code>move east</code>  --- moving one square to the east,</li>
	<li><code>move south</code>  --- moving one square to the south,</li>
	<li><code>move west</code>  --- moving one square to the west.</li>
</ul>

<p>For each declamation command, the robot loudly reads the given phrase, and also prints it back in text. During a declamation, the robot does not move. The robot is guaranteed to correctly handle phrases which consist of characters with ASCII codes from <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c33"></mjx-c><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>32</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$32$</span></mjx-container> to <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c36"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>126</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$126$</span></mjx-container> inclusive and are at most <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c35"></mjx-c><mjx-c class="mjx-c36"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>256</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$256$</span></mjx-container> characters long.</p>

<p>For each movement command, the robot prints back one of the four words:</p>

<ul>
	<li><code>bump</code> if instead of moving, the robot hit a barrier, in which case, it remains on the same square,</li>
	<li><code>moved</code> if the robot successfully moved into a common square,</li>
	<li><code>found</code> if the robot moved into the special square during one of the first nine actions,</li>
	<li><code>win</code> if the robot moved into the special square during the tenth action.</li>
</ul>

<p>Help Misha to play this game in such a way that, during the tenth action, the robot prints the desired word <code>win</code>.</p>

### 입력 

 Empty

### 출력 

 Empty

