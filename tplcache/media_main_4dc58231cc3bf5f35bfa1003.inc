<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><html>
<head>
<meta http-equiv='Content-Type' content='text/html; charset=gb2312'>
<title>�������ݹ���</title>
<link href='img/base.css' rel='stylesheet' type='text/css'>
<style>
.napisdiv {left:10;top:0;width:150px;height:100px;position:absolute;z-index:3}
</style>
<script>
function ChangeImage(surl){ document.getElementById('picview').src = surl; }
	//���ѡ���ļ����ļ���
function getCheckboxItem(){
	 var allSel="";
	 if(document.form1.aids.value) return document.form1.aids.value;
	 for(i=0;i<document.form1.aids.length;i++)
	 {
		 if(document.form1.aids[i].checked){
			 if(allSel=="")
				 allSel=document.form1.aids[i].value;
			 else
				 allSel=allSel+","+document.form1.aids[i].value;
		 }
	 }
	 return allSel;	
}

function AllSel(){
	for(i=0;i<document.form1.aids.length;i++){
		document.form1.aids[i].checked = true;
	}
}

function NoneSel(){
	for(i=0;i<document.form1.aids.length;i++){
		document.form1.aids[i].checked = false;
	}
}

function DelSel(){
	 var nid = getCheckboxItem();
	 if(nid==""){
		  alert("��ѡ����Ŀ!\r\n");
		  return ;
	 }
	 location.href = "media_edit.php?dopost=del&ids="+nid;
}
</script>
</head>
<body background='img/allbg.gif' leftmargin='8' topmargin='8'>
<div id="floater" class="napisdiv">
<a href="javascript:;" onClick="ChangeImage('../include/dialog/img/picviewnone.gif');">
	<img src='../include/dialog/img/picviewnone.gif' id='picview' name='picview' border='0' alt='�����ر�Ԥ��' style='z-index:10000'>
</a>
</div>
<SCRIPT language=JavaScript src="js/float.js"></SCRIPT>
<table width="98%" border="0" align="center" cellpadding="3" cellspacing="1" bgcolor="#D1DDAA">
  <tr> 
    <td height="28" colspan="7" background="img/tbg.gif">
    	<table width='96%' cellpadding='0' cellspacing='0'>
    		<tr>
    		<td width='30%'><b>�������ݹ���</b></td>
        <td align='right'>
    	  [<a href="media_add.php"><u>�ϴ����ļ�</u></a>]
        </td>
      </tr>
     </table>
     </td>
  </tr>
  <tr bgcolor="#F2FAE2" height="24"> 
    <td colspan="7">
	<table width="600" border="0" cellspacing="0" cellpadding="0">
        <form name='forms' method='post' action='media_main.php'>
        <tr> 
          <td width="10">&nbsp;</td>
          <td width="70" align="center">�ؼ��֣�</td>
          <td width="100">
          	<input name="keyword" type="text" id="keyword" style="width:100" value="<?php echo $keyword?>" />
          </td>
          <td width="100" align="center">
		  <select name='mediatype' style='width:80'>
              <option value='0'>�ļ�����</option>
              <option value='1'<?php if($mediatype==1) echo " selected"?>>ͼƬ</option>
              <option value='2'<?php if($mediatype==2) echo " selected"?>>FLASH</option>
              <option value='3'<?php if($mediatype==3) echo " selected"?>>��Ƶ/��Ƶ</option>
              <option value='4'<?php if($mediatype==4) echo " selected"?>>��������</option>
            </select> </td>
          <td width="100" align="center">
		  <select name='membertype' style='width:80'>
              <option value='0'>�û���</option>
              <option value='1'<?php if($membertype==1) echo " selected"?>>����Ա</option>
              <option value='2'<?php if($membertype==2) echo " selected"?>>�ⲿ��Ա</option>
		 </select>
		  </td>
          <td>
          	<input class="np" name="imageField" type="image" src="img/button_search.gif" width="60" height="22" border="0" />
          </td>
        </tr>
      </form>
      </table>
    </td>
  </tr>
  <tr bgcolor="#F9FCEF" height="24" align="center"> 
    <td width="8%">ѡ��</td>
      
    <td width="28%">�ļ�����</td>
      
    <td width="10%">�ļ���С</td>
      
    <td width="15%">�ϴ���Ա</td>
      
    <td width="15%">�ϴ�ʱ��</td>
      
    <td width="9%">�ļ�����</td>
      
    <td width="15%">����</td>
   </tr>
   <form name='form1'>
<?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
foreach( $blockValue as $key=>$fields )
{
?>
  <tr align="center" bgcolor="#FFFFFF" height="24" 
  	onMouseMove="javascript:this.bgColor='#f4fbf4';" onMouseOut="javascript:this.bgColor='#FFFFFF';"> 
    <td>
    	<input type='checkbox' name='aids' id='aids<?php echo $fields['aid']; ?>' value='<?php echo $fields['aid']; ?>' class='np'/>
    </td>
    <td>
    	<a href='<?php echo $fields['url']; ?>' title='<?php echo $fields['url']; ?>' target='_blank'>
      <u><?php echo $fields['title']; ?></u>
    	</a>
    </td>
    <td><?php echo GetFileSize($fields['filesize']); ?></td> 
    <td><?php echo UploadAdmin($fields['adminname'],$fields['membername']); ?></td>
    <td><?php echo MyDate('Y-m-d H:i',$fields['uptime']); ?></td>
    <td><?php echo MediaType($fields['mediatype'],$fields['url']); ?></td>
    <td>
    	<a href='media_edit.php?aid=<?php echo $fields['aid']; ?>&dopost=edit'>����</a> 
      |
      <a href='media_edit.php?aid=<?php echo $fields['aid']; ?>&dopost=del'>ɾ��</a> 
    </td>
     </tr>
<?php
}
?>
  <tr bgcolor="#F9FCEF" height="28"> 
   <td colspan="7">
    &nbsp; <input type="button" name="b4" value="ȫѡ" class="coolbg np" style="width:40px" onClick="AllSel();" /> 
    &nbsp; <input type="button" name="b5" value="ȡ��" class="coolbg np" style="width:40px" onClick="NoneSel();" /> 
    &nbsp; <input type="button" name="b6" value="ɾ����ѡ" class="coolbg np" style="width:80px" onClick="DelSel();" />
   </td>
  </tr>
  <tr bgcolor="#EEFAC9" height="36"> 
    <td colspan="7" align="center">
    	<?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

    </td>
  </tr>
</form>
</table>
</td>
</tr>
</table>
</body>
</html>