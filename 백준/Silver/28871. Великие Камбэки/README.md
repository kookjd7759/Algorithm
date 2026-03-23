# [Silver V] Великие Камбэки - 28871 

[문제 링크](https://www.acmicpc.net/problem/28871) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

수학, 많은 조건 분기

### 제출 일자

2026년 3월 23일 16:28:20

### 문제 설명

<p>Халк и Тор ведут бой не на жизнь, а на смерть. Один мощнейший удар сменяется другим снова и снова. Зрители в восторге!</p>

<p>Наблюдающий за всем этим Грандмастер, естественно, болеет не за конкретного бойца, а за зрелищность, поэтому после боя он хочет оценить насколько сражение было интересным. Грандмастер считает каждый мощный удар за каждым из бойцов, а затем смотрит сколько за бой было совершено камбэков. Камбэком Грандмастер считает ситуацию, в которой один боец проигрывал по счету мощных ударов, но затем стал выигрывать. Суммарное число камбэков за бой и характеризует зрелищность поединка.</p>

<p>Однако, вот незадача, Грандмастер сохранил только финальный счет и не может восстановить суммарное число камбэков за бой. Но бой ему так понравился, что он считает, что их было максимальное возможное количество. Вам, как почетному скауту, доверено посчитать наибольшее возможное количество камбэков в бою, при данном счете.</p>

### 입력 

 <p>В единственной строке заданы два целых числа <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$a$</span></mjx-container> и <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44F TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$b$</span></mjx-container>, разделенные символом <<:>> --- количество мощных ударов совершенных Тором и Халком соответственно (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D44F TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn><mo>≤</mo><mi>a</mi><mo>,</mo><mi>b</mi><mo>≤</mo><mn>1000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$0 \le a, b \le 1000$</span></mjx-container>).</p>

### 출력 

 <p>Выведите единственное число --- наибольшее возможное количество камбэков за бой.</p>

