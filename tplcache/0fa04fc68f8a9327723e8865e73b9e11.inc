{dede:noteinfo notename="人大新闻-法学院" channelid="1" macthtype="string"
	refurl="http://" sourcelang="utf-8" cosort="asc"
  isref="no" exptime="10" usemore="0" /}
{dede:listrule sourcetype="batch" rssurl="http://" regxurl="http://"
startid="1" endid="" addv="1" urlrule="area" musthas=""
 nothas="" listpic="0" usemore="0"}
	{dede:addurls}http://news1.ruc.edu.cn/102449/102450/102497/list.html
http://news1.ruc.edu.cn/102449/102450/102497/list_23.html
http://news1.ruc.edu.cn/102449/102450/102497/list_22.html
http://news1.ruc.edu.cn/102449/102450/102497/list_21.html{/dede:addurls}
	{dede:batchrule}{/dede:batchrule}
	{dede:regxrule}{/dede:regxrule}
	{dede:areastart}<table width="743" cellspacing="1" bgcolor="#CACCCE">{/dede:areastart}
	{dede:areaend}<table width="100%"><tr><td align=right>{/dede:areaend}
{/dede:listrule}
{dede:sppage sptype='full'}{/dede:sppage}
{dede:previewurl}http://news1.ruc.edu.cn/102449/102450/102497/67680.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<td width="90%" align="center" style="FONT-WEIGHT: bold; padding-top:20px; FONT-SIZE: 12pt; COLOR: #ff0000; LINE-HEIGHT: 28pt" ><div>[内容]</div></td>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='writer' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='source' value='' isunit='' isdown=''}
   {dede:match}<tr><td width="90%" colSpan=2 align="center">作者：[内容]</td>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='pubdate' value='' isunit='' isdown=''}
   {dede:match}<tr><td width="90%" align="center" style="FONT-SIZE: 7pt; COLOR: #999999; FONT-FAMILY: Verdana"><div>([内容])</div></td>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='body' value='' isunit='' isdown='1'}
   {dede:match}<tr><td width="90%" align="left" valign="top" style="PADDING-RIGHT: 20px; PADDING-LEFT: 20px;PADDING-BOTTOM: 20px;FONT-SIZE: 10.5pt; LINE-HEIGHT: 22px; TEXT-DECORATION: none">[内容]</td>
	</tr>
<tr><td><img src="http://images.ruc.edu.cn/templates/{/dede:match}
   {dede:trim replace="<p>"}<p>（编辑：(.*)）<br />{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}