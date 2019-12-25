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