<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $cfg_soft_lang; ?>">
<title>�ĵ�����</title>
<link rel="stylesheet" type="text/css" href="css/base.css">
<script language="javascript" src="../include/js/dedeajax2.js"></script>
<script language="javascript" src="js/ieemu.js"></script>
<script language="javascript" src="js/context_menu.js"></script>
<script language="javascript" src="js/main.js"></script>
<script language="javascript" src="js/list.js"></script>
<script type="text/javascript" src="http://i.haiwen.net/js/jquery.min.js"></script>
<script type="text/javascript">
u=window.location.href;if(u.indexOf('?')<1) {u+='?'; }
if(window.location.href.indexOf('orderby')<1){window.location.href=u+'&orderby=pubdate'}

function showTack(aid){
	$('tr.tacklist').hide();

	if($('#tacklist'+aid+' td').html()==''){
		f='<table border="0" cellpadding="2" cellspacing="1" bgcolor="#D6D6D6" width=100%>\
	<tr align="center" bgcolor="#FBFCE2">\
    <td width="110">ʱ��</td>\
    <td width="90">����IP</td>\
    <td>����ҳ</td>\
    <td>��·ҳ��</td>\
	</tr>{val}</table>';
		$.get('ajax_tack.php',{id:aid}, function(data, textStatus){
			$('#tacklist'+aid+' td').html(f.replace('{val}',data));
			//alert(data);
		});
	}
	if($('#tacklist'+aid).hasClass('none')){
		$('#tacklist'+aid).show();
		$('#tacklist'+aid).removeClass('none');
	}else{
		$('#tacklist'+aid).hide();
		$('#tacklist'+aid).addClass('none');
	}
}
function showWriter(t,w){
	if(t==w){document.write(w)}
	else{document.write('<span style="color:red" title="�����ˣ�'+t+'">'+w+'</span>')}
}
</script>
<style type="text/css">
.none{display:none}
.tacklist{ background:#FFF}
.tack a{ font:bold 16px/150% Verdana; color:#06C}
.tit div{text-align:left; height:18px; overflow: hidden; white-space: nowrap; text-overflow: ellipsis; display:block;}
.cat{ height:18px; overflow:hidden; width:72px;}
.reffer {text-align:left;}
.reffer a{ float:left; margin-top:3px; padding:0 4px}
</style>
</head>
<body leftmargin="8" topmargin="8" background='images/allbg.gif' onLoad="ContextMenu.intializeContextMenu()">

<!--  ����ת��λ�ð�ť  -->
<table width="98%" border="0" cellpadding="0" cellspacing="1" bgcolor="#ccd9b9" align="center">
<tr>
 <td height="26" background="images/newlinebg3.gif">
  <table width="98%" border="0" cellspacing="0" cellpadding="0">
  <tr>
  <td align="center">
  <input type='button' class="coolbg np" onClick="location='catalog_do.php?channelid=<?php echo $GLOBALS['channelid']; ?>&cid=<?php echo $GLOBALS['cid']; ?>&dopost=addArchives';" value='�����ĵ�' />
  <?php if($adminid==$mid){ ?>
	<input type='button' class="coolbg np" onClick="location='content_list.php?cid=<?php echo $GLOBALS['cid']; ?>&mid=0';" value='ȫ���ĵ�' />
	<?php
}
else{
?>
	<input type='button' class="coolbg np" onClick="location='content_list.php?cid=<?php echo $GLOBALS['cid']; ?>&mid=<?php echo $cuserLogin->getUserID(); ?>';" value='�ҵ��ĵ�' />
	<?php }  echo $GLOBALS['CheckUserSend']; ?>
 <input type='button' class="coolbg np" onClick="location='catalog_main.php';" value='��Ŀ����' />
 <input type='button' class="coolbg np" name='bb1' onClick="location='makehtml_list.php?cid=<?php echo $GLOBALS['cid']; ?>';" value='�����б�' />
 <input type='button' class="coolbg np" name='bb2' onClick="location='makehtml_archives.php?cid=<?php echo $GLOBALS['cid']; ?>';" value='�����ĵ�' />
 <input type='button' class="coolbg np" name='bb1' onClick="location='recycling.php?cid=<?php echo $GLOBALS['cid']; ?>';" value='���»���վ' />
 </td>
 </tr>
</table>
</td>
</tr>
</table>
  
<!--  �����б�   -->
<form name="form2">
<table border="0" cellpadding="2" cellspacing="1" bgcolor="#CFCFCF" style="margin-top:8px;">
<tr bgcolor="#E7E7E7" >
	<td height="28" colspan="11" background="images/tbg.gif" style="padding-left:10px;">
	�� <?php echo $GLOBALS['positionname']; ?>�ĵ��б� &nbsp;(ʹ������Ҽ������˵�)
	| <a href="#" onclick="window.location.href=window.location.href.replace(/orderb/gi,'')+'&orderby=pubdate'" style="color:red">������ʱ������</a>
	| <a href="#" onclick="window.location.href=window.location.href.replace(/orderb/gi,'')+'&orderby=senddate'" style="color:green">���״�¼��ʱ������</a>
	| <a href="#" onclick="window.location.href=window.location.href.replace(/orderb/gi,'')+'&orderby=tackid'" style="color:green">��·��������</a>
	</td>
</tr>
<tr align="center" bgcolor="#FBFCE2" height="25">
	<td width="32">ID</td>
	<td width="20">ѡ</td>
	<td width="80">��Ŀ</td>
	<td>���±���</td>
	<td width="64">����</td>
	<td width="66">����ʱ��</td>
	<td width="32">���</td>
	<td width="39">��·</td>
	<td width="24">HTML</td>
	<td width="30">Ȩ��</td>
	<td width="40">����</td>
</tr>
<?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
<tr align='center' bgcolor="#FFFFFF" height="26" align="center" onMouseMove="javascript:this.bgColor='#FCFDEE';" onMouseOut="javascript:this.bgColor='#FFFFFF';">
	<td nowrap>
		<?php echo $fields['id']; ?>
	</td>
	<td>
		<input name="arcID" type="checkbox" id="arcID" value="<?php echo $fields['id']; ?>" class="np" />
	</td>
	<td><div class="cat">
		<a href='content_list.php?cid=<?php echo $fields['typeid']; ?>'><?php echo GetTypename($fields['typeid']); ?></a>
		</div></td>
	<td align='left'>
		<span id="arc<?php echo $fields['id']; ?>">
			<a href='archives_do.php?aid=<?php echo $fields['id']; ?>&dopost=editArchives'
				 oncontextmenu="ShowMenu(event,this,<?php echo $fields['id']; ?>,'<?php echo str_replace('\'', '', $fields['title']); ?>')">
				<u><?php echo $fields['title']; ?></u>
			</a>
		</span>
		<?php echo IsCommendArchives($fields['flag']); ?>
	</td>
	<td>
		<img src='images/trun.gif' title="�༭����" alt="�༭����" onClick="QuickEdit(<?php echo $fields['id']; ?>, event, this);" style='cursor:pointer' border='0' width='16' height='16' />
		<a href="article_weibo.php?aid=<?php echo $fields['id']; ?>"><img src='http://res.xschu.com/img/ico/weibo.com.png' title="��΢��" alt="��΢��" style='cursor:pointer' border='0' /></a>
		<img src='images/part-list.gif' title="Ԥ��" alt="Ԥ��" onClick="viewArc(<?php echo $fields['id']; ?>);" style='cursor:pointer' border='0' width='16' height='16' />
	</td>
	<td title="����ʱ��: <?php echo GetDateMk($fields['senddate']); ?>"><?php echo GetDateMk($fields['pubdate']); ?></td>
	<td><?php echo $fields['click']; ?></td>
	<td class="tack" id="tack<?php echo $fields['id']; ?>"><a href="javascript:showTack(<?php echo $fields['id']; ?>)"><?php echo $fields['tackid']; ?></a></td>
	<td><?php echo IsHtmlArchives($fields['ismake']); ?></td>
	<td><?php echo GetRankName($fields['arcrank']); ?></td>
	<td><script type="text/javascript">showWriter('<?php echo GetMemberName($fields['mid']); ?>','<?php echo $fields['writer']; ?>');</script></td>
</tr>
<tr class="tacklist none" id="tacklist<?php echo $fields['id']; ?>">
	<td colspan="11"></td>
</tr>
<?php
}
}?>
<tr bgcolor="#ffffff">
<td height="36" colspan="11">
	&nbsp;
	<a href="javascript:selAll()" class="coolbg">ȫѡ</a>
	<a href="javascript:noSelAll()" class="coolbg">ȡ��</a>
	<a href="javascript:updateArc(0)" class="coolbg">&nbsp;����&nbsp;</a>
	<a href="javascript:checkArc(0)" class="coolbg">&nbsp;���&nbsp;</a>
	<a href="javascript:adArc(0)" class="coolbg">&nbsp;�Ƽ�&nbsp;</a>
	<a href="javascript:;" onClick="moveArc(event,this,<?php echo (empty($channelid) ? 0 : $channelid); ?>)" class="coolbg">&nbsp;�ƶ�&nbsp;</a>
	<a href="javascript:delArc(0)" class="coolbg">&nbsp;ɾ��&nbsp;</a>
	<?php if($channelid==1) echo "	<a href=\"javascript:kwArc(0)\" class=\"coolbg\">&nbsp;�Զ��ؼ���&nbsp;</a>\r\n"; ?>
	<a href="javascript:;" onClick="cAtts('attsAdd',event,this)" class="coolbg">&nbsp;��������&nbsp;</a>
	<a href="javascript:;" onClick="cAtts('attsDel',event,this)" class="coolbg">&nbsp;ɾ������&nbsp;</a>
</td>
</tr>

<tr align="right" bgcolor="#F9FCEF">
	<td height="36" colspan="11" align="center">
		<?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '3';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

	</td>
</tr>
</table>
</form>
<script type="text/javascript">
$('.tack').each(function(){
    if($(this).text()=='0'){$(this).html('--');}
});
</script>
<!--  ��������  -->
<form name='form3' action='content_list.php' method='get'>
<input type='hidden' name='dopost' value='listArchives' />
<table width='98%'  border='0' cellpadding='1' cellspacing='1' bgcolor='#cfcfcf' align="center" style="margin-top:8px">
  <tr bgcolor='#EEF4EA'>
    <td background='images/wbg.gif' align='center'>
      <table border='0' cellpadding='0' cellspacing='0' height="32">
        <tr>
          <td width='160'>
          <select name='cid' style='width:150px'>
          <option value='0'>ѡ����Ŀ...</option>
          	<?php echo $GLOBALS['optionarr']; ?>
          </select>
        </td >
        <td nowrap>
          �ؼ��֣�
        </td>
        <td width='130'>
          	<input type='text' name='keyword' value='<?php echo $GLOBALS['keyword']; ?>' style='width:120px' />
        </td>
        <td width='90'>
    		<select name='orderby' style='width:80px'>
            <option value='id'>����...</option>
            <option value='pubdate'>����ʱ��</option>
            <option value='sortrank'>�ö�Ȩֵ</option>
            <option value='click'>�����</option>
            <option value='scores'>���ۻ���</option>
            <option value='lastpost'>�������</option>
      	</select>
      </td>
      <td width='90'>
    		<select name='flag' style='width:80px'>
            <option value=''>����...</option>
            <?php echo $GLOBALS['flagsArr']; ?>
      	</select>
      </td>
       <td>
          <input name="imageField" type="image" src="images/button_search.gif" width="60" height="22" border="0" class="np" />
       </td>
      </tr>
     </table>
   </td>
  </tr>
</table>
</form>

</body>
</html>