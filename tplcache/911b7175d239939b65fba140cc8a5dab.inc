<dl class="tbox">
        <dt><strong><a href="{dede:field name='typeurl'/}">{dede:field 
		name='typename'/}</a></strong><span class="more"><a href="{dede:field name='typeurl'/}">...</a></span></dt>
        <dd>
          <ul class="d1 ico3">
          	{dede:arclist titlelen='60' row='8'}
            <li><span>[field:pubdate function=&quot;MyDate('m-d',@me)&quot;/]</span><a href="[field:arcurl /]">[field:title 
			/]</a></li>
            {/dede:arclist}
          </ul>
        </dd>
      </dl>