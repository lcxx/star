<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv='Content-Type' content='text/html; charset=<?php echo $cfg_soft_lang; ?>'>
<title>Ȧ�ӹ���-&gt;Ȧ���б�</title>
<link href="img/base.css" rel="stylesheet" type="text/css" />
<style type="text/css">
.rb{ border-right:1px solid #98CAEF }
.tb{ border-top:1px solid #98CAEF }
</style>
<script type="text/javascript">
var flag=false;
function MyImage(Img){
	var image=new Image();
	image.src=Img.src;
	width=80;//Ԥ�����õ��������Ŀ���ֵ
	height=80;//Ԥ�����õ��������ĸߵ�ֵ
	if(image.width>width||image.height>height){//����ͼƬֻ�п���߳���Ԥ��ֵ�ͽ���js����
		w=image.width/width;
		h=image.height/height;
		if(w>h){//��ֵ�Ƚϴ�==>���ȸߴ�
			//���¿���Ϊwidth�Ŀ���
			Img.width=width;
			//����Ϊ����߶�
			Img.height=image.height/w;
		}else{//�߱ȿ���
			//���¿���Ϊheight�߶�
			Img.height=height;
			//����Ϊ����߶�
			Img.width=image.width/h;
		}
	}
}
</script>
</head>
<body background='img/allbg.gif' leftmargin='8' topmargin='8'>

<div class="bodytitle">
	<div class="bodytitleleft"></div>
	<div class="bodytitletxt">Ȧ�ӹ���</div>
</div>
<table width="98%" border="0" cellpadding="1" cellspacing="1" align="center" class="tbtitle" style="	background:#dbe4cd;">
  <tr>
    <td height="30" align="center" bgcolor="#FAFCEF">
      <form action="group_main.php" name="form1" method="get">
	    <table width="600" border="0" cellpadding="0" cellspacing="0">
          <tr>
            <td width="69">&nbsp;�ؼ��֣�</td>
            <td width="83" align="left">
           	  <input name="keyword" type="text" id="keyword" size="12" style="width:100" value="<?php echo $keyword?>">            </td>
            <td width="80">&nbsp;�����ˣ�</td>
            <td width="87"><input name="username" type="text" id="username" size="12" style="width:100" value="<?php echo $username?>" /></td>
            <td width="59" align="center">��Ŀ��            </td>
            <td width="161" align="left"><select name="store" id="store">
              <option value="0">����</option>
              <?php echo $option?>
            </select></td>
            <td width="81" align="center"><input name="imageField" type="submit" class="np coolbg" value="����"/></td>
          </tr>
        </table>
	  </form>
    </td>
  </tr>
</table>

<table width="98%" border="0" cellpadding="1" cellspacing="1" align="center" class="tbtitle" style="	background:#dbe4cd;">
  <tr>
    <td height="24" colspan="9" bgcolor="#eef4ea"><table width="99%" border="0" cellspacing="0" cellpadding="0">
        <tr>
          <td width="29%">&nbsp;&nbsp;<strong>Ȧ�ӹ���>>Ȧ���б�</strong></td>
          <td width="71%" align="right">&nbsp;</td>
        </tr>
      </table></td>
  </tr>
  <tr bgcolor="#FDFEE9" height="26">
    <td width="10%" align="center">ͼ��</td>
    <td width="20%" align="center">[ID]����/ʱ��</td>
    <td width="5%" align="center">�ٷ�?</td>
    <td width="10%" align="center">������</td>
    <td width="30%" align="center">˵��</td>
    <td width="10%" align="center">����Ա</td>
    <td width="15%" align="center">����</td>
  </tr>
  <!--��ҳ-->
 <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
foreach( $blockValue as $key=>$fields )
{

$row = $fields;
$icon = $row['groupimg'];
if(!$icon) $icon = "img/dfpic.gif";
$issystem = $row['issystem'];
if($issystem) $issystem = "<font color='red'>�ٷ�</font>";
else $issystem = "��ͨ";
if($row['ishidden'])
{
	$ishidden = "<font color='red'>�ر�</font>";
	$opstauts = "����";
	$opstautsdo = "open";
}
else
{
	$ishidden = "<font color='#66CC00'>����</font>";
	$opstauts = "�ر�";
	$opstautsdo = "close";
}
?>
  <tr height="26" align="center" bgcolor="#FFFFFF" onMouseMove="javascript:this.bgColor='#f4fbf4';" onMouseOut="javascript:this.bgColor='#FFFFFF';">
    <td><img src="<?php echo $icon?>" align="absmiddle" onload='javascript:MyImage(this);'/></td>
    <td align="left" valign="middle"><table width="100%" border="0" cellspacing="0" cellpadding="0">
        <tr>
          <td height="26">[<?php echo $row['groupid']?>] <?php if($row['isindex']) echo "[<font color='red'>��</font>]";?><u><a href="group_edit.php?id=<?php echo $row['groupid']?>"><?php echo $row['groupname']?></a></u>/<?php echo GetDateMk($row['stime'])?></td>
        </tr>
        <tr>
          <td height="26">״̬��<?php echo $ishidden?>;��Ŀ��<?php echo GetGroupstore($row['storeid']);?></td>
        </tr>
      </table></td>
    <td><?php echo $issystem?></td>
    <td><?php echo $row['creater']?></td>
    <td title="title"><?php echo $row['des']?></td>
    <td><?php echo $row['ismaster']?></td>
    <td>
	<table width="98%" border="0" cellspacing="0" cellpadding="0">
        <tr>
          <td align="center" height="25"><a href="group_main.php?action=<?php echo $opstautsdo?>&id=<?php echo $row['groupid']?>"><?php echo $opstauts?></a> | <a href="group_edit.php?id=<?php echo $row['groupid']?>">�༭</a> | <a href="group_main.php?action=del&id=<?php echo $row['groupid']?>" onClick="return(confirm('ɾ�����޷��ָ�,��ȷ��ɾ����?'))">ɾ��</a> | <a href="group_guestbook.php?gid=<?php echo $row['groupid']?>">����</a></td>
        </tr>
      </table></td>
  </tr>
<?php
}
?>
  <!--��ҳ-->
  <tr>
     <td height="28" colspan="9" bgcolor="#eef4ea">&nbsp;&nbsp;<?php
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