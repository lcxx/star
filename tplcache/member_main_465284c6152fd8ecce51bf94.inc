<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $cfg_soft_lang; ?>">
<title>��վ��Ա����</title>
<link href="css/base.css" rel="stylesheet" type="text/css">
<script language="javascript" src="js/member.js"></script>
<style type="text/css">
.rb{ border-right:1px solid #666666 }
.tb{ border-top:1px solid #666666 }
</style>
</head>
<body background='images/allbg.gif' leftmargin='8' topmargin='8'>
<table width="98%" border="0" align="center" cellpadding="3" cellspacing="1" bgcolor="#D6D6D6" style="margin-bottom:6px">
  <tr>
    <td height="30" align="center" bgcolor="#F9FCEF"> 
  <form action="member_main.php" name="form1" method="get">
	  <table border="0" cellspacing="0" cellpadding="3">
      <tr>
          <td>�ؼ��֣�</td>
          <td><input name="keyword" type="text" id="keyword" size="12" style="width:120px" value="<?php echo $GLOBALS['keyword']; ?>" /></td>
          <td>&nbsp;����</td>
          <td>
		        <select name="sortkey" id="sortkey" style="width:120px">
              <?php echo $GLOBALS['sortform']; ?>
				      <option value="mid">mid/ע��ʱ��</option>
              <option value="logintime">��¼ʱ��</option>
              <option value="rank">��Ա�ȼ�</option>
              <option value="money">��Ա���</option>
              <option value="scores">��Ա����</option>
            </select>
          </td>
          <td>
		         <select name="sex" id="sex" style="width:60px">
               <?php echo $GLOBALS['sexform']; ?>
               <option value="��">��</option>
               <option value="Ů">Ů</option>
               <option value="����">����</option>
             </select>
          </td>
          <td>
          	<select name="mtype" id="mtype" style="width:60px">
               <?php echo $GLOBALS['mtypeform']; 
           		foreach($MemberModels as $row)
           		{
           			echo "<option value=".$row['name'].">".$row['name']."</option>\r\n";
           		}
           	   ?>
             </select>
          </td>
          <td>
		      <select name="spacesta" id="spacesta" style="width:150px">
              <option value='-10'>--��Ա״̬--</option>
              <?php
           		foreach($staArr as $k=>$v)
           		{
           			if($spacesta==$k) echo "<option value='$k' selected>$v</option>\r\n";
           			else echo "<option value='$k'>$v</option>\r\n";
           		}
           	  ?>
            </select></td>
         <td>
           <input name="imageField" class="np" type="image" src="images/button_search.gif" width="60" height="22" border="0" />
          </td>
        </tr>
      </table>
	  </form>
    </td>
  </tr>
</table>
<form name="form2">
<table width="98%" border="0" align="center" cellpadding="2" cellspacing="1" bgcolor="#cfcfcf">
  <tr> 
  <td height="28" colspan="7" background="images/tbg.gif">
   <table width="99%" border="0" cellspacing="0" cellpadding="0">
     <tr>
       <td width="29%" style="padding-left:10px;"><strong>ע���Ա�б�</strong></td>
       <td width="71%" align="right">
          <a href="member_main.php">���л�Ա</a> |
          <a href="member_main.php?spacesta=-2">�������û�</a> |
          <a href="member_main.php?matt=1">���Ƽ�</a> |
          <a href="member_main.php?matt=0">��ͨ</a> &nbsp;
       </td>
     </tr>
  </table>
 </td>
</tr>
  <tr bgcolor="#FEFCEF" height="30" align="center"> 
    <td width="48">ѡ��</td>
    <td width="30">mid</td>
    <td width="160">��¼��</td>
    <td width="200">����¼</td>
    <td width="160">��Ա����</td>
    <td width="130">����</td>
    <td width="">email/�ǳ�</td>
  </tr>
<?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?> 
<tr height="26" align="center" bgcolor="#FFFFFF" onMouseMove="javascript:this.bgColor='#FCFDEE';"
  	 onMouseOut="javascript:this.bgColor='#FFFFFF';"> 
  <td><input name="mid" type="checkbox" id="mid" value="<?php echo $fields['mid']; ?>" class="np" /></td>
  <td><?php echo $fields['mid']; ?></td>
  <td><a href="../member/index.php?uid=<?php echo $fields['userid']; ?>" target='_blank'>
    <?php
	  echo '<u>'.$fields['userid'].'</u>';
	if($fields['spacesta']==-2) echo "<font color='red'>(����)</font>";
	if($fields['spacesta']==-1) echo "<font color='red'>(δ���)</font>";
	  if(!empty($fields['face'])) {
       echo "<br /><img src='{$fields['face']}' alt='�����Ա�ռ�' />";
	  }
	?>
  </a></td>
  <td align="left">
  	<?php echo MyDate('Y-m-d H:i',$fields['logintime']); ?> <a href="http://www.ip.cn/?ip=<?php echo $fields['loginip']; ?>" target="_blank"><u><?php echo $fields['loginip']; ?></u></a>
  </td>
   <td>
  	<?php echo $fields['mtype']; ?>�û� <?php echo GetMAtt($fields['matt']); ?> ��ң�<?php echo $fields['money']; ?> ���֣�<?php echo $fields['scores']; ?>
  </td>
 <td align="center">
    <a href="member_view.php?id=<?php echo $fields['mid']; ?>">�޸�</a>
    <a href="member_do.php?id=<?php echo $fields['mid']; ?>&dopost=delmember">ɾ��</a>
    <a href="content_list.php?mid=<?php echo $fields['mid']; ?>" target="_blank">�ĵ�</a>
    <a href="member_toadmin.php?id=<?php echo $fields['mid']; ?>" target="_self">����</a>
  </td>
	<td align="left">
	  <?php echo $fields['email']; ?> �ǳƣ�<?php echo $fields['uname']; ?>
	</td>
  <!--td>
  	<?php echo $fields['sex']; ?>
  </td>
  <td>
  	<a href="member_main.php?rank=<?php echo $fields['rank']; ?>"><?php echo GetMemberName($fields['rank'],'���ƻ�Ա'); ?></a>
  </td-->
</tr>
<?php
}
}?> 
<!--tr bgcolor="#ffffff"> 
 <td height="36" colspan="7">
	&nbsp;
	<a href="javascript:selAll()" class="coolbg">ȫѡ</a>
	<a href="javascript:noSelAll()" class="coolbg">ȡ��</a>
	<a href="javascript:delArc(0)" class="coolbg">&nbsp;ɾ��&nbsp;</a>
 ������Ѿ���������̳���û��벻Ҫʹ������ɾ�����ܣ�</td>
</tr-->
<tr bgcolor="#F9FCEF"> 
 <td height="36" colspan="7" align="center">
	<?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '6';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

 </td>
</tr>
</table>
</form>
</body>
</html>