# [Silver V] Плеер Кингсманов - 28855 

[문제 링크](https://www.acmicpc.net/problem/28855) 

### 성능 요약

메모리: 2412 KB, 시간: 12 ms

### 분류

구현

### 제출 일자

2025년 11월 20일 10:30:19

### 문제 설명

<p>Каждому, кто принят в <<Кингсман>>, выдают специальный плеер, чтобы они могли слушать музыку, пока находятся в пути на задание. </p>

<p>Гарри показал себя как лучший агент во множестве заданий. Он умеет пользоваться огромным числом технологий, но, к сожалению, за все время работы в агенстве он так и не узнал, на какую кнопку нужно нажимать, чтобы песни можно было проигрывать в случайном порядке. </p>

<p>Перед тем, как отправиться на задание в очередной раз, он увидел, как другие агенты нажимают на одну из кнопок в центре плеера. Гарри тоже нажал на одну из них. Известно, что нажатие на первую кнопку запускает последовательное воспроизведение песен с той, на которой плеер был остановлен (если текущая песня --- последняя в списке треков, следующей будет проигрываться первая песня из списка), а вторая кнопка запускает воспроизведение песен в случайном порядке.</p>

<p>Гарри слишком занят мыслями о предстоящем деле, поэтому не может проверить, проигрываются ли песни в случайном порядке или нет. Помоги Гарри --- определите номер позиции первой песни, послушав которую, Гарри поймет, что треки проигрываются случайном порядке, либо определите, что песни проигрываются в последовательном порядке.</p>

### 입력 

 <p>В первой строке входных данных содержится единственное целое число  <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> --- количество песен в плеере (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c33"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msup space="4"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>3</mn><mo>≤</mo><mi>n</mi><mo>≤</mo><msup><mn>10</mn><mn>5</mn></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$3 \leq n \leq 10^5$</span></mjx-container>).</p>

<p>Во второй строке содержатся <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> различных целых чисел <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>a</mi><mi>i</mi></msub></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$a_i$</span></mjx-container> (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msub space="4"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><msub><mi>a</mi><mi>i</mi></msub><mo>≤</mo><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \leq a_i \leq n$</span></mjx-container>), где <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$i$</span></mjx-container>-е число обозначает номер песни, которая играла <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$i$</span></mjx-container>-й. </p>

### 출력 

 <p>Если песни проигрываются в последовательном порядке, в единственной строке выведите <<<code>NO</code>>> без кавычек. В противном случае на первой строке выведите <<<code>YES</code>>>, а на следующей за ней номер позиции первой песни, послушав которую, можно понять, что Гарри слушает песни в случайном порядке.</p>

