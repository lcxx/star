<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $cfg_soft_lang; ?>">
<title>ucenter1.5.0��װ��</title>
<style rel="stylesheet" type="text/css">
<!--
*{ word-wrap:break-word; outline:none; }
body{ background:#FFF; text-align:center; }
body, td, input, textarea, select, button{ color:#666; font:12px "Lucida Grande", Verdana, Lucida, Helvetica, Arial, sans-serif; }
body, ul, dl, dd, p, h1, h2, h3, h4, h5, h6, form, fieldset { margin:0; padding:0; }
h1, h2, h3, h4, h5, h6{ font-size:12px; }
a{ color:#2366A8; text-decoration:none; }
	a:hover { text-decoration:underline; }
	a img{ border:none; }
em, cite, th{ font-style:normal; font-weight:normal; }
table{ border-collapse:collapse; }
/* form */
textarea, input{ padding:2px; border:1px solid; border-color:#666 #eee #eee #666; }
input.txt:hover, input.txt:focus, textarea:hover, textarea:focus{ border-color:#09C; background:#F5F9FD; }
.radio{ margin-top:-1px; border:none; vertical-align:middle; }
.checkbox{ height:14px; border:none; vertical-align:middle; }
.btn{ margin:3px 0; padding:2px 5px; *padding:4px 5px 1px; border-color:#ddd #666 #666 #ddd; background:#DDD; color:#000; cursor:pointer; }
.sgbtn{ margin-left:20px; padding:3px 7px; *padding:4px 7px 2px; border:1px solid #B5CFD9; background:#F2F9FD; color:#666; font-size:12px; font-weight:400; }
	.sgbtn:hover{ text-decoration:none; }
.bigarea{ margin-left:5px; width:230px; height:120px; }
.opt{ clear:both; overflow:hidden; }
	.opt th{ padding:5px 0; font-weight:700; text-align:left; }
	.opt td{ padding-bottom:10px; }
	.opt .txt, .opt textarea{ vertical-align:middle; margin-right:10px; width:180px; }
	.opt select{ vertical-align:middle; margin-right:10px; }
	.opt .area{ height:80px; }
	.opt .bigarea { width: 500px; height: 80px; }
	.opt label{ margin-right:20px; }
	.opt p{ float:left; line-height:180%; }
/* title */
h3{ font-size:14px; }
	h3 .btn{ margin-left:10px; vertical-align:middle; }
.mainbox{ margin:10px 0; padding:20px; text-align:left;}
.note{ margin:5px 0; padding:10px; width:580px; border:1px solid #B5CFD9; background:#F5F9FD; }
	.i{ padding-left:22px; line-height:19px; background:url(img/help.gif) no-repeat; }
		.i a{ text-decoration:underline; }
		.i a:hover{ text-decoration:none; }
.fixwidth{ width: 100%; }
	.fixwidthdec{ width:700px; }
-->
</style>
</head>
<body background='img/allbg.gif' leftmargin='8' topmargin='8'>
<div class="mainbox">
    <h3 style="margin-bottom:10px;">��װ��<a href="module_main.php" class="sgbtn">����ģ���б�</a></h3>
    <div class="note fixwidthdec"><p class="i">�״ΰ�װǰ�뱸�ݺ�<?php echo $GLOBALS['_vars']['uc_config_file']; ?>�����ļ�.�Է�ֹ�޸Ĵ�������վ�޷�����</p></div>
    <form action="api_ucenter.php" method="post">
	<input name="dopost" type="hidden" value="install" />
	<table class="opt">
    <tr>
        <th colspan="2">����˵�ַ:</th>
    </tr>
    <tr>
        <td><input type="text" class="txt" name="uc_setings[ucapi]" value="" /></td>
        <td>��ֵ������װ�� UCenter ��ᱻ��ʼ�������� UCenter   ��ַ����Ŀ¼�ı������£��޸Ĵ��һ������벻Ҫ�Ķ�<br />
				  ����: http://www.site.com/uc_server (���Ҫ��'/')��</td>
    </tr>

    <tr>
        <th colspan="2">��ʼ������:</th>
    </tr>
    <tr>
        <td><input type="text" class="txt" name="uc_setings[authkey]" value="" /></td>
        <td>��ֵ������װ�� UCenter ��ᱻ��ʼ��һ����¼����,UCenter��֮Ϊ����ʼ�����롱</td>
    </tr>

    <tr>
        <th colspan="2">�����IP��ַ:</th>
    </tr>
    <tr>
        <td><input type="text" class="txt" name="uc_setings[ucip]" value="127.0.0.1" /></td>
        <td>������ķ������޷�ͨ���������� UCenter���������� UCenter �������� IP ��ַ</td>
    </tr>


    </table>
    <div class="opt"><input type="submit" name="submit" value=" ȷ�ϰ�װ " class="btn" tabindex="3" /></div>
    </form>
</div>
</body>
</html>