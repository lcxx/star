<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=gb2312">
<title>��������</title>
<link href="img/base.css" rel="stylesheet" type="text/css" />
<script language="javascript">
//���ѡ����
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
			allSel=allSel+"`"+document.form1.aids[i].value;
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
	if(nid==""){
		alert("��ѡ��Ҫɾ����ҵ���¼!\r\n");
		return ;
	}
	location.href = "shops_operations.php?dopost=delete&nid="+nid;
}
function UpSel()
{
	var nid = getCheckboxItem();
	if(nid==""){
		alert("��ѡ��Ҫ���ĵĶ�����¼!\r\n");
		return ;
	}
	location.href = "shops_operations.php?dopost=up&nid="+nid;
}
function OkSel()
{
	var nid = getCheckboxItem();
	if(nid==""){
		alert("��ѡ��Ҫ���ĵĶ�����¼!\r\n");
		return ;
	}
	location.href = "shops_operations.php?dopost=ok&nid="+nid;
}
function PushSel(){
	var nid = getCheckboxItem();
	if(nid==""){
		alert("��ѡ��Ҫ���ĵĶ�����¼!\r\n");
		return ;
	}
	location.href = "shops_operations.php?dopost=push&nid="+nid;
}
function OpenMyWinN(surl,w,h){
	window.open(surl, "popUpMyWinN", "scrollbars=yes,resizable=yes,statebar=no,width="+w+",height="+h+",left=200, top=100");
}
</script>
</head>
<body background='img/allbg.gif' leftmargin='8' topmargin='8'>
<table width="98%" border="0" cellpadding="1" cellspacing="1" align="center" class="tbtitle" style="background:#cbd8ac;margin-bottom:5px">
  <tr>
    <td height="30" align="center" bgcolor="#FAFCEF">
	<form name="form2" method="get" action="shops_operations.php">
        <table border="0" cellspacing="0" cellpadding="0">
          <tr>
            <td>���붩���ţ�</td>
            <td>
              <input name="buyid" type="text" id="buyid"></td>
            <td width="100" align="center"> <input name="imageField" type="submit" class='np coolbg' value="����">
            </td>
          </tr>
        </table>
      </form></td>
  </tr>
</table>
<table width="98%" border="0" cellpadding="1" cellspacing="1" align="center" class="tbtitle" style="background:#cbd8ac;">
  <tr>
    <td height="28" colspan="11" bgcolor="#EDF9D5" background='img/tbg.gif'>
    	<table width="98%" border="0" cellspacing="0" cellpadding="0">
        <tr>
          <td width="30%"><strong>&nbsp;&gt; �����б���</strong> </td>
          <td width="45%" align="right" style="padding-top:4px">
          	<input type="button" name="ss13" value="δ����" style="width:50px;margin-right:6px" onClick="location='shops_operations.php?sta=0';"  class='np coolbg'/>
            <input type="button" name="ss14" value="�Ѹ���" style="width:50px;margin-right:6px" onClick="location='shops_operations.php?sta=1';"  class='np coolbg'/>
          	<input type="button" name="ss142" value="�ѷ���" style="width:50px;margin-right:6px" onClick="location='shops_operations.php?sta=2';"  class='np coolbg'/>
          	<input type="button" name="ss142" value="�����" style="width:50px;margin-right:6px" onClick="location='shops_operations.php?sta=4';"  class='np coolbg'/>
            <input type="button" name="ss16" value="ȫ��" style="width:40px;margin-right:6px" onClick="location='shops_operations.php';"  class='np coolbg'/>
          </td>
          <td width="25%" align="right" style="padding-top:4px">
          	<input type="button" name="ss12" value="��������" style="width:90px;margin-right:6px" onClick="location='shops_operations.php';"  class='np coolbg'/>
          </td>
        </tr>
      </table></td>
  </tr>
  <tr bgcolor="#F8FBFB">
    <td width="8%" align="center">ѡ��</td>
    <td width="25%" align="center">������</td>
    <td align="center">�ջ���</td>
    <td align="center">����</td>
    <td width="22%" align="center">��������</td>
    <td align="center">������</td>
    <td align="center">���ͷ�</td>
    <td align="center">�ܼ�</td>
    <td align="center">֧����ʽ</td>
    <td align="center">״̬</td>
    <td align="center">�û�</td>
  </tr>
  <form name="form1">
<?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
foreach( $blockValue as $key=>$fields )
{
?>
    <tr bgcolor="#FFFFFF">
      <td align="center">
<input type='checkbox' name='aids' value='<?php echo $fields['oid']?>' class='np'></td>
      <td align="center">
        <?php echo $fields['oid'];?>
      </td>
      <td align="center">
        <a href="javascript:OpenMyWinN('shops_operations_userinfo.php?oid=<?php echo $fields['oid']?>',500,350);" ><?php echo $fields['consignee']?></a>
      </td>
      <td align="center">
        <?php echo $fields['cartcount']?>
        <a href="javascript:OpenMyWinN('shops_operations_cart.php?oid=<?php echo $fields['oid']?>',680,450);" >[����]</a>
      </td>
      <td align="center">
        <?php echo GetDateTimeMk($fields['stime'])?>
        (<font color="#FF0000"><?php echo floorTime(time()-$fields['stime'],$fields['stime']); ?></font>)
      </td>
      <td align="center">
        <?php echo $fields['price']?>
      </td>
      <td align="center">
        <?php echo $fields['dprice']?>
      </td>
      <td align="center">
        <?php echo $fields['priceCount']?>
      </td>
      <td align="center">
        <?php echo GetsType($fields['paytype'])?>
      </td>
      <td align="center">
        <?php echo GetSta($fields['state'])?>
      </td>

      <td align="center">
        <?php echo GetMemberID($fields['userid'])?>
      </td>
    </tr>
<?php
}
?>
  </form>
  <tr>
    <td height="28" colspan="11" bgcolor="#FCFDF7" style="padding-top:4px;">&nbsp;
      <input type="button" name="b7" value="��ѡ" class='np coolbg' style="width:40" onClick="ReSel();">
      <input type="button" name="b" value="ɾ��" style="width:40" onClick="DelSel();" class='np coolbg' />
      <input type="button" name="b5" value="��Ϊ�Ѹ���״̬" class='np coolbg' style="width:100" onClick="UpSel();">
      <input type="button" name="b9" value="��Ϊ�ѷ���״̬" class='np coolbg' style="width:100" onClick="PushSel();">
	  <input type="button" name="b9" value="��Ϊ�����״̬" class='np coolbg' style="width:100" onClick="OkSel();">
    </td>
  </tr>
  <tr>
    <td height="36" colspan="11" bgcolor="#FCFDF7" align="center">
     <?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listitem'] = 'info,index,end,pre,next,pageno';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

    </td>
  </tr>
</table>
</body>
</html>