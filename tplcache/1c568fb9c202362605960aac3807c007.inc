<dl class="mold">
<dt><a href="{dede:field name='typeurl'/}" class="l">{dede:field 
name='typename'/}</a><a class="r" href="{dede:field name='typeurl'/}">����...</a></dt>
<dd>
<ol>
	{dede:arclist titlelen='160' row='10'}
<li><span class="date">[field:pubdate function=&quot;MyDate('m-d',@me)&quot;/]</span><a href="[field:arcurl /]">[field:title 
/]</a></li>
{/dede:arclist}
</ol>
</dd>
</dl>