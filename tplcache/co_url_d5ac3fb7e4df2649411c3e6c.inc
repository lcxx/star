<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=gb2312">
<title>�ɼ����ݹ���</title>
<link href="img/base.css" rel="stylesheet" type="text/css">
<script language="javascript">
//���ѡ���ļ����ļ���
function getCheckboxItem()
{
	var allSel="";
	if(document.form1.aids.value) return document.form1.aids.value;
	for(i=0;i<document.form1.aids.length;i++)
	{
		if(document.form1.aids[i].checked)
		{
			if(allSel=="")
				allSel=document.form1.aids[i].value;
			else
				allSel=allSel+","+document.form1.aids[i].value;
		}
	}
	return allSel;	
}
function ReSel()
{
	for(i=0;i<document.form1.aids.length;i++)
	{
		if(document.form1.aids[i].checked) document.form1.aids[i].checked = false;
		else document.form1.aids[i].checked = true;
	}
}
function DelSel()
{
	var nid = getCheckboxItem();
	location.href = "co_do.php?dopost=clear&ids="+nid;
}
function DelSel2()
{
	var nid = getCheckboxItem();
	location.href = "co_do.php?dopost=clear&clshash=true&ids="+nid;
}
function ClearCt()
{
	var nid = getCheckboxItem();
	location.href = "co_do.php?dopost=clearct&ids="+nid;
}
</script>
</head>
<body background='img/allbg.gif' leftmargin='8' topmargin='8'>
<table width="98%" border="0" cellpadding="2" cellspacing="1" bgcolor="#D1DDAA" align="center">
  <tr> 
    <td height="28" colspan="8" background='img/tbg.gif'>
    	<table width="96%" border="0" cellpadding="0" cellspacing="0">
        <tr> 
          <td width="20%" height="18">&nbsp;<strong>��ʱ���ݹ�����</strong></td>
          <td width="80%" align="right">
          	<?php echo $exportbt; ?>
          	<input type="button" name="ba2" value="�ڵ����" class="coolbg np" style="width:80px" onClick="location.href='co_main.php';" />
          	<input type="button" name="ba1" value="�����������" class="coolbg np" style="width:100px" onClick="location.href='co_do.php?dopost=clearall';" />
          	</td>
        </tr>
      </table>
     </td>
  </tr>
  <tr align="center" bgcolor="#FAFAF1"> 
    <td width="6%">ѡ��</td>
    <td width="30%">���ݱ���</td>
    <td width="15%">�����ڵ�</td>
    <td width="10%">��ȡ����</td>
    <td width="8%">����</td>
    <td width="8%">����</td>
    <td width="10%">Ԥ����Ŀ</td>
    <td width="8%">��Դ��ҳ</td>
  </tr>
  <form name="form1">
  <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
foreach( $blockValue as $key=>$fields )
{
?>
  <tr align="center" bgcolor="#FFFFFF"> 
    <td><input type='checkbox' name='aids' value='<?php echo $fields['aid']; ?>' class='np'></td>
    <td><a href='co_view.php?aid=<?php echo $fields['aid']; ?>'><?php echo $fields['title']; ?></a></td>
    <td><a href='co_edit.php?nid=<?php echo $fields['nid']; ?>'><?php echo $fields['notename']; ?></a></td>
    <td><?php echo GetDateMk($fields['dtime']); ?></td>
    <td><?php echo IsDownLoad($fields['isdown']); ?></td>
    <td><?php echo IsExData($fields['isex']); ?></td>
    <td><?php echo $fields['typename']; ?></td>
    <td><a href='<?php echo $fields['url']; ?>' target='_blank'>[Դ��ַ]</a></td>
  </tr>
 <?php
}
?>
</form>
  <tr> 
    <td height="30" colspan="8" bgcolor="#FCFDF7">&nbsp;
	  <input type="button" name="b11" value="��ѡ" class="coolbg np" style="width:40px" onClick="ReSel();" /> ��
	  <input type="button" name="b12" value="��ɾ����ַ" class="coolbg np" style="width:80px" onClick="DelSel();" />
	  <input type="button" name="b13" value="���������" class="coolbg np" style="width:80px" onClick="ClearCt();" />
	  <input type="button" name="b14" value="ɾ����ַ����ʷ��¼" class="coolbg np" style="width:120px" onClick="DelSel2();" />
    </td>
  </tr>
  <tr> 
    <td height="36" colspan="8" bgcolor="#FCFDF7" align="center">
    <?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

    </td>
  </tr>
</table>
</body>
</html>