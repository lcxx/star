<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=gb2312">
<title>�ʴ�ģ�� -- �û����ʹ���</title>
<link href='img/base.css' rel='stylesheet' type='text/css'>
<script>
function selAll()
{
	for(i=0;i<document.form2.answerid.length;i++)
	{
		if(!document.form2.answerid[i].checked)
		{
			document.form2.answerid[i].checked=true;
		}
	}
}
function noSelAll()
{
	for(i=0;i<document.form2.answerid.length;i++)
	{
		if(document.form2.answerid[i].checked)
		{
			document.form2.answerid[i].checked=false;
		}
	}
}
//���ѡ���ļ����ļ���
function getCheckboxItem()
{
	var allSel="";
	if(document.form2.answerid.value) return document.form2.answerid.value;
	for(i=0;i<document.form2.answerid.length;i++)
	{
		if(document.form2.answerid[i].checked)
		{
			if(allSel=="")
				allSel=document.form2.answerid[i].value;
			else
				allSel=allSel+"`"+document.form2.answerid[i].value;
		}
	}
	return allSel;
}

//���ѡ������һ����id
function getOneItem()
{
	var allSel="";
	if(document.form2.answerid.value) return document.form2.answerid.value;
	for(i=0;i<document.form2.answerid.length;i++)
	{
		if(document.form2.answerid[i].checked)
		{
				allSel = document.form2.answerid[i].value;
				break;
		}
	}
	return allSel;
}
function checkanswer(aid){
	var qstr=getCheckboxItem();
	if(aid==0) aid = getOneItem();
	location="ask_answer.php?aid="+aid+"&action=check&qstr="+qstr;
}
function deleteanswer(aid){
	var qstr=getCheckboxItem();
	if(aid==0) aid = getOneItem();
	location="ask_answer.php?qstr="+qstr+"&aid="+aid+"&action=delete";
}
</script>
</head>
<body background='img/allbg.gif' leftmargin='8' topmargin='8'>
	<div class="bodytitle">
	<div class="bodytitleleft"></div>
	<div class="bodytitletxt"><a href='../ask' target='_blank'><b>�ʴ�ģ��</b></a> -- �û��𰸹���</div>
</div>
<tr>
<td align='center' valign='top'>
<table width="98%" border="0" cellpadding="1" cellspacing="1" align="center" class="tbtitle" style="background:#E2F5BC;">
<tr>
<td height="24" colspan="10" align="left" background="img/tbg.gif">
&nbsp;��<b>���б� &nbsp; <a href="ask_answer.php">ȫ����</a> | <a href="ask_answer.php?check=1">δ��˵Ĵ�</a></b>
</td>
</tr>
<form name="form2" action="ask_answer.php>
<tr height="22" align="center">
<td  width="6%" bgcolor="#EDF9D5">id</td>
<td width="4%" bgcolor="#EDF9D5">ѡ��</td>
<td width="62%" bgcolor="#EDF9D5">��</td>
<td width="10%" bgcolor="#EDF9D5">�ش�ʱ��</td>
<td width="6%" bgcolor="#EDF9D5">�ش���</td>
<td width="6%" bgcolor="#EDF9D5">��״̬</td>
</tr>
<?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
foreach( $blockValue as $key=>$fields )
{

	if($fields['ifcheck'] == 1){
		$fields['ifcheck'] = '�����';
	}elseif($fields['ifcheck']==0){
		$fields['ifcheck'] = 'δ���';
	}
	$fields['dateline'] = gmdate('Y-m-d H:i:s' , $fields['dateline'] + 3600*$cfg_ask_timeoffset);
?>
<tr align='center' bgcolor="#FFFFFF"  onMouseMove="javascript:this.bgColor='#FCFDEE';" onMouseOut="javascript:this.bgColor='#FFFFFF';" height="22" >
<td><?php echo $fields['id']; ?></td>
<td><input name="answerid" type="checkbox" id="id" value="<?php echo $fields['id']; ?>" class='np' /></td>
<td align='left'><a title="����鿴����ҳ��" href="../ask/question.php?id=<?php echo $fields['askid']; ?>" target="_blank"><?php echo $fields['content']; ?></a></td>
<td><?php echo $fields['dateline']; ?></td>
<td><a href="member_view.php?ID=<?php echo $fields['uid'];?>" target="_blank"><?php echo $fields['username']; ?></a></td>
<td><?php echo $fields['ifcheck']; ?></td>
</tr>
<?php
}
?>
<tr bgcolor="#F8FBFB">
<td height="24" colspan="10" align="left">
&nbsp;
<a href="javascript:selAll()" class="coolbg">ȫѡ</a>
<a href="javascript:noSelAll()" class="coolbg">ȡ��</a>
<a href="javascript:checkanswer(0)" class="coolbg">���</a>
<a href="javascript:deleteanswer(0)" class="coolbg">ɾ��</a></td>
</tr>
</form>
<tr align="right" bgcolor="#E5F9FF">
<td height="20" colspan="10" align="center" bgcolor="#EDF9D5">
	<?php
$atts = array();
$atts['tagname'] = 'pagelist';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

</td>
</tr>
</table>
</td>
</tr>
</body>
</html>