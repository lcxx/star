<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv='Content-Type' content='text/html; charset=<?php echo $cfg_soft_lang; ?>'>
<title>Ȧ�ӹ���->�������</title>
<link href="img/base.css" rel="stylesheet" type="text/css" />
<style type="text/css">
.rb{ border-right:1px solid #98CAEF }
.tb{ border-top:1px solid #98CAEF }
</style>
<script type="text/javascript">
function CheckAll(form){
	for (var i=0;i<form.elements.length;i++){
		var e = form.elements[i];
		e.checked == true ? e.checked = false : e.checked = true;
	}
}
</script>
</head>
<body background='img/allbg.gif' leftmargin='8' topmargin='8'>
<div class="bodytitle">
	<div class="bodytitleleft"></div>
	<div class="bodytitletxt">Ȧ�ӹ���->�������</div>
</div>
<table width="98%" border="0" cellpadding="1" cellspacing="1" align="center" class="tbtitle" style="	background:#E2F5BC;">
  <tr>
    <td height="30" align="center" bgcolor="#FAFCEF">
      <form action="group_threads.php" name="form1" method="get">
	    <table width="380" border="0" cellpadding="0" cellspacing="0">
          <tr>
            <td width="69">&nbsp;�ؼ��֣�</td>
            <td width="83" align="left">
           	  <input name="keyword" type="text" id="keyword" size="12" style="width:100" value="<?php echo $keyword?>">            </td>
            <td width="60">&nbsp;�û���</td>
            <td width="87"><input name="username" type="text" id="username" size="12" style="width:100" value="<?php echo $username?>" /></td>
            <td width="81" align="center"><input name="imageField" type="submit" class="np coolbg" value="����"/></td>
          </tr>
        </table>
	  </form>
    </td>
  </tr>
</table>
<form action="group_threads.php" method="post" onSubmit="return(confirm('ɾ�����޷��ָ�,��ȷ��ɾ����?'))">
<table width="98%" border="0" align="center" cellpadding="1" cellspacing="0" style="background:#E2F5BC;">
  <tr>
    <td width="53%" height="30" align="left" bgcolor="#EDF9D5"><font color="#458146"> ��<strong>��������</strong></font></td>
    <td width="47%" height="30" align="right" bgcolor="#EDF9D5">&nbsp;<a href="group_threads.php?orders=digest" ><font color="#458146">��Ʒ��</font></a> <font color="#458146">|</font> <a href="group_threads.php?orders=close" ><font color="#458146">�ѹر�</font></a><font color="#458146">|</font> <a href="group_threads.php?orders=rep"><font color="#458146">���ظ�</font></a>&nbsp;&nbsp;</td>
  </tr>
</table>
<table width="98%" border="0" cellpadding="1" cellspacing="1" align="center" class="tbtitle" style="background:#E2F5BC;">
  <tr>
    <td height="30" align="center" bgcolor="#FAFCEF">
<table width="100%" border="0" align="center" cellpadding="1" cellspacing="1" >
  <tr>
    <td width="3%" height="24" align="left" bgcolor="#FDFEE9"></td>
    <td width="5%" height="24" align="left" bgcolor="#FDFEE9">���</td>
    <td width="5%" height="24" align="left" bgcolor="#FDFEE9">�ظ�</td>
    <td width="44%" height="24" align="left" bgcolor="#FDFEE9">����/Ȧ��</td>
    <td width="16%" height="24" align="left" bgcolor="#FDFEE9">����</td>
    <td width="15%" height="24" align="left" bgcolor="#FDFEE9">���ظ�</td>
    <td width="12%" align="left" bgcolor="#FDFEE9">����</td>
  </tr>
<?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
foreach( $blockValue as $key=>$fields )
{

$row = $fields;
$titleleft = "";
$subject = $row['subject'];
if($row['digest']) $titleleft .= "<span style='color:green;'>[��]</span>";
if($row['displayorder']) $titleleft .= "<span style='color:red;'>[��]</span>";
if($row['closed']) $subject = "<s>".$subject."</s>";
$subject = $titleleft.$subject;
?>
  <tr>
    <td height="28" align="center" bgcolor="#FFFFFF"><input name="ids[]" type="checkbox" id="Ids-<?php echo $row['tid']?>" value="<?php echo $row['tid']?>" /></td>
    <td height="28" align="left" bgcolor="#FFFFFF"><?php echo $row['views']?></td>
    <td height="28" align="left" bgcolor="#FFFFFF"><?php echo $row['replies']?></td>
    <td height="28" align="left" bgcolor="#FFFFFF"><?php echo $subject?>/<a href="group_edit.php?id=<?php echo $row['gid']?>"><?php echo GetGroupname($row['gid'])?></a></td>
    <td height="28" align="left" bgcolor="#FFFFFF"><a href="member_view.php?id=<?php echo $row['authorid']?>"><?php echo $row['author']?></a> [<?php echo GetDateMk($row['dateline'])?>]</td>
    <td height="28" align="left" bgcolor="#FFFFFF"><?php echo $row['lastposter']?> [<?php echo GetDateMk($row['lastpost'])?>]</td>
    <td height="28" align="left" bgcolor="#FFFFFF"><a href="group_threads.php?action=del&id=<?php echo $row['tid']?>" onClick="return(confirm('ɾ�����޷��ָ�,��ȷ��ɾ����?'))">ɾ��</a>|<a href="group_threads.php?action=close&id=<?php echo $row['tid']?>">�ر�</a>|<a href="group_threads.php?action=digest&id=<?php echo $row['tid']?>">�Ӿ�</a>|<a href="group_threads.php?action=top&id=<?php echo $row['tid']?>">�ö�</a></td>
  </tr>
<?php
}
?>
  <tr>
    <td height="28" colspan="7" align="left" bgcolor="#FDFEE9">
      <table width="100%" border="0">
        <tr>
          <td width="26%">&nbsp;<input type="button" class="np coolbg" onClick="CheckAll(this.form)" value="�� ѡ" />
            <input type="submit" class="np coolbg" value="ɾ��" /></td>
          <td width="74%" align="right"><?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listitem'] = 'info,index,end,pre,next,pageno';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>
&nbsp;&nbsp;</td>
        </tr>
      </table></td>
  </tr>
</table>
</td>
</tr>
</table>
</form>
</body>
</html>