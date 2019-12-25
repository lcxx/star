{dede:noteinfo notename="人大新闻" channelid="1" macthtype="string"
	refurl="http://" sourcelang="gb2312" cosort="asc"
  isref="no" exptime="10" usemore="0" /}
{dede:listrule sourcetype="hand" rssurl="http://" regxurl="http://"
startid="1" endid="" addv="1" urlrule="area" musthas=""
 nothas="" listpic="0" usemore="0"}
	{dede:addurls}http://www.ruconline.com/new.asp?page=1&anclassid=39&nclassid=415&nclass=新闻动态
http://www.ruconline.com/new.asp?page=2&anclassid=39&nclassid=415&nclass=新闻动态
http://www.ruconline.com/new.asp?page=3&anclassid=39&nclassid=415&nclass=新闻动态{/dede:addurls}
	{dede:batchrule}{/dede:batchrule}
	{dede:regxrule}{/dede:regxrule}
	{dede:areastart}<td width="91%"><b>新闻动态</b></td>{/dede:areastart}
	{dede:areaend}<form method=Post action=new.asp?anclassid=39&ncla{/dede:areaend}
{/dede:listrule}
{dede:sppage sptype='full'}{/dede:sppage}
{dede:previewurl}http://www.ruconline.com/news.asp?newsid=224{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<font color=#ff0000><b>[内容]</b></font>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='writer' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='source' value='' isunit='' isdown=''}
   {dede:match}来源：[内容]<{/dede:match}
   {dede:trim replace=""} {/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='pubdate' value='' isunit='' isdown=''}
   {dede:match}<div align="center"> 发布时间：[内容] 此新闻{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}<td height="200" valign="top"><br>[内容]</td>
              </tr>
              <tr>
                <td height="30">{/dede:match}
   {dede:trim replace=""}<span([^>]*)>{/dede:trim}
{dede:trim replace=""}</span>{/dede:trim}
{dede:trim replace=""}<FONT([^>]*)>{/dede:trim}
{dede:trim replace=""}</FONT>{/dede:trim}
{dede:trim replace=""}来源：人大新闻网{/dede:trim}
{dede:trim replace=""}</TD></TR></TBODY></TABLE>{/dede:trim}
{dede:trim replace=""}<TABLE width="100%">([^>]*)<TD style="PADDING-BOTTOM: 20px; LINE-HEIGHT: 22px; PADDING-LEFT: 20px; PADDING-RIGHT: 20px; FONT-SIZE: 10.5pt; TEXT-DECORATION: none" vAlign=top width="90%" align=left>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}