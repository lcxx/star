{dede:sppage sptype='full'}{/dede:sppage}
{dede:previewurl}http://news1.ruc.edu.cn/102449/102450/102502/76755.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<td width="90%" align="center" style="FONT-WEIGHT: bold; padding-top:20px; FONT-SIZE: 12pt; COLOR: #ff0000; LINE-HEIGHT: 28pt" ><div>[����]</div></td>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='writer' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='source' value='' isunit='' isdown=''}
   {dede:match}<tr><td width="90%" colSpan=2 align="center">[����]</td>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='pubdate' value='' isunit='' isdown=''}
   {dede:match}<tr><td width="90%" align="center" style="FONT-SIZE: 7pt; COLOR: #999999; FONT-FAMILY: Verdana"><div>([����])</div></td>{/dede:match}
   
   {dede:function}@me=GetMkTime(@me);{/dede:function}
{/dede:item}
{dede:item field='body' value='' isunit='' isdown='1'}
   {dede:match}<tr><td width="90%" align="left" valign="top" style="PADDING-RIGHT: 20px; PADDING-LEFT: 20px;PADDING-BOTTOM: 20px;FONT-SIZE: 10.5pt; LINE-HEIGHT: 22px; TEXT-DECORATION: none">[����]</td>{/dede:match}
   {dede:trim replace=""}���༭��(.*)��<br />{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}