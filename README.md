
<!DOCTYPE HTML>
<html>
	<head>
		<meta charset="UTF-8"/>
		          <title>三维数字地球软件开发包 osgEarthX | hacksome</title>
      		
		<link rel="shortcut icon" href="http://hacksome.cn/wp-content/themes/hacksome/images/favicon.png" />
		<link rel="stylesheet" type="text/css" href="http://hacksome.cn/wp-content/themes/hacksome/css/basic.css"/>

					<link rel="stylesheet" type="text/css" href="http://hacksome.cn/wp-content/themes/hacksome/css/page.css">
			<link rel="stylesheet" type="text/css" href="http://hacksome.cn/wp-content/themes/hacksome/css/post.css">
				
		<script type="text/javascript" src="http://hacksome.cn/wp-content/themes/hacksome/js/jquery-1.7.2.js"></script>
		<script type="text/javascript" src="http://hacksome.cn/wp-content/themes/hacksome/js/hacksome_basic.js"></script>

		<!--[if lt IE 8]>
		<link rel="stylesheet" type="text/css" href="http://hacksome.cn/wp-content/themes/hacksome/css/style_ie6.css"/>
		<script src="http://hacksome.cn/wp-content/themes/hacksome/js/IE9.js" type="text/javascript"></script>
		<![endif]-->

		<!--[if IE 8]>
		<link rel="stylesheet" type="text/css" href="http://hacksome.cn/wp-content/themes/hacksome/css/style_ie8.css"/>
		<![endif]-->

		<!--[if lt IE 9]>
		<link rel="stylesheet" type="text/css" href="http://hacksome.cn/wp-content/themes/hacksome/css/style_lt_ie9.css"/>
		<script src="http://hacksome.cn/wp-content/themes/hacksome/js/DOMAssistantCompressed-2.7.4.js" type="text/javascript"></script>
		<script src="http://hacksome.cn/wp-content/themes/hacksome/js/ie-css3.js" type="text/javascript"></script>
		<script src="http://hacksome.cn/wp-content/themes/hacksome/js/respond.js" type="text/javascript"></script>
		<script type="text/javascript" src="http://hacksome.cn/wp-content/themes/hacksome/js/hacksome_lt_ie9.js"></script>
		<script type="text/javascript" src="http://hacksome.cn/wp-content/themes/hacksome/js/hacksome_media_lt_ie9.js"></script>
		<![endif]-->

		<!--[if lt IE 8]>
		<script src="http://hacksome.cn/wp-content/themes/hacksome/js/hacksome_ie6.js" type="text/javascript"></script>
		<![endif]-->

		<script type="text/javascript" src="http://hacksome.cn/wp-content/themes/hacksome/js/hacksome.js"></script>
		
		<link rel="alternate" type="application/rss+xml" title="hacksome &raquo; Feed" href="http://hacksome.cn/feed" />
<link rel="alternate" type="application/rss+xml" title="hacksome &raquo; 评论Feed" href="http://hacksome.cn/comments/feed" />
		<script type="text/javascript">
			window._wpemojiSettings = {"baseUrl":"http:\/\/s.w.org\/images\/core\/emoji\/72x72\/","ext":".png","source":{"concatemoji":"http:\/\/hacksome.cn\/wp-includes\/js\/wp-emoji-release.min.js?ver=4.3.1"}};
			!function(a,b,c){function d(a){var c=b.createElement("canvas"),d=c.getContext&&c.getContext("2d");return d&&d.fillText?(d.textBaseline="top",d.font="600 32px Arial","flag"===a?(d.fillText(String.fromCharCode(55356,56812,55356,56807),0,0),c.toDataURL().length>3e3):(d.fillText(String.fromCharCode(55357,56835),0,0),0!==d.getImageData(16,16,1,1).data[0])):!1}function e(a){var c=b.createElement("script");c.src=a,c.type="text/javascript",b.getElementsByTagName("head")[0].appendChild(c)}var f,g;c.supports={simple:d("simple"),flag:d("flag")},c.DOMReady=!1,c.readyCallback=function(){c.DOMReady=!0},c.supports.simple&&c.supports.flag||(g=function(){c.readyCallback()},b.addEventListener?(b.addEventListener("DOMContentLoaded",g,!1),a.addEventListener("load",g,!1)):(a.attachEvent("onload",g),b.attachEvent("onreadystatechange",function(){"complete"===b.readyState&&c.readyCallback()})),f=c.source||{},f.concatemoji?e(f.concatemoji):f.wpemoji&&f.twemoji&&(e(f.twemoji),e(f.wpemoji)))}(window,document,window._wpemojiSettings);
		</script>
		<style type="text/css">
img.wp-smiley,
img.emoji {
	display: inline !important;
	border: none !important;
	box-shadow: none !important;
	height: 1em !important;
	width: 1em !important;
	margin: 0 .07em !important;
	vertical-align: -0.1em !important;
	background: none !important;
	padding: 0 !important;
}
</style>
<script type="text/javascript">
var duoshuoQuery = {"short_name":"hacksome","sso":{"login":"http:\/\/hacksome.cn\/wp-login.php?action=duoshuo_login","logout":"http:\/\/hacksome.cn\/wp-login.php?action=logout&_wpnonce=60c87291b1"},"theme":"bluebox","stylePatch":"wordpress\/hacksome"};
duoshuoQuery.sso.login += '&redirect_to=' + encodeURIComponent(window.location.href);
duoshuoQuery.sso.logout += '&redirect_to=' + encodeURIComponent(window.location.href);
</script>
<script type="text/javascript" src="http://static.duoshuo.com/embed.js" charset="UTF-8" async="async"></script>
<link rel="EditURI" type="application/rsd+xml" title="RSD" href="http://hacksome.cn/xmlrpc.php?rsd" />
<link rel="wlwmanifest" type="application/wlwmanifest+xml" href="http://hacksome.cn/wp-includes/wlwmanifest.xml" /> 
<meta name="generator" content="WordPress 4.3.1" />
<link rel='canonical' href='http://hacksome.cn/osgearthx' />
<link rel='shortlink' href='http://hacksome.cn/?p=17' />
			</head>
	<body class="custom-background">
		<div id="loading-main-container"></div>
		<div id="main-container">

			<!--[if lt IE 8]>
			<link rel="stylesheet" type="text/css" href="http://hacksome.cn/wp-content/themes/hacksome/css/empty-ie6.css">
			<div class="common-container" id="lt-Ie9-Notification">
				<div class="sub-container">
					<em>温馨提示：您的浏览器已经过时，请及时升级。</em>
				</div>
			</div>
			<![endif]-->

			<div id="header" class="header-container">
					<div id="infobar">
						<div id="website-logo">
							<a class="none-decoration-anchor" href="http://hacksome.cn" title="hacksome | to be hacksome">
								<img src="http://hacksome.cn/wp-content/themes/hacksome/images/header.png" alt="hacksome"/>
							</a>
						</div>
						<div id="search">
							<form method="get" id="searchform" action="http://hacksome.cn/">
								<div id="search-container">
									<input type="text" id="search-txt" value="" name="s" lang="zh-CN"/>
									<input type="submit" value="" id="search-submit" />
								</div>
							</form>
						</div>
					</div>

					<div id="menu">
						<div class="main-navigation" role="navigation">
							<div id="nav" class="menu-hacksome-container"><ul id="menu-hacksome" class="nav-menu"><li id="menu-item-4" class="menu-item menu-item-type-custom menu-item-object-custom menu-item-home menu-item-4"><a href="http://hacksome.cn/">首页</a></li>
<li id="menu-item-19" class="menu-item menu-item-type-post_type menu-item-object-page current-menu-item page_item page-item-17 current_page_item menu-item-has-children menu-item-19"><a href="http://hacksome.cn/osgearthx">osgEarthX</a>
<ul class="sub-menu">
	<li id="menu-item-15" class="menu-item menu-item-type-custom menu-item-object-custom menu-item-15"><a href="https://github.com/haozzzzzzzz/osgEarthX-binary">可执行程序</a></li>
	<li id="menu-item-14" class="menu-item menu-item-type-custom menu-item-object-custom menu-item-14"><a href="#">数据</a></li>
	<li id="menu-item-16" class="menu-item menu-item-type-custom menu-item-object-custom menu-item-16"><a href="https://github.com/haozzzzzzzz/osgEarthX">源码</a></li>
	<li id="menu-item-20" class="menu-item menu-item-type-taxonomy menu-item-object-category menu-item-has-children menu-item-20"><a href="http://hacksome.cn/category/articles/osgearthx">文章</a>
	<ul class="sub-menu">
		<li id="menu-item-12" class="menu-item menu-item-type-taxonomy menu-item-object-category menu-item-12"><a href="http://hacksome.cn/category/articles/osgearthx/osgearthx-tutorials">教程</a></li>
		<li id="menu-item-13" class="menu-item menu-item-type-taxonomy menu-item-object-category menu-item-13"><a href="http://hacksome.cn/category/articles/osgearthx/osgearthx-documents">文档</a></li>
	</ul>
</li>
</ul>
</li>
</ul></div>						</div>
					</div>
			</div>			<div class="common-container">
				<div class="sub-container"><h1><a href="http://hacksome.cn/osgearthx">三维数字地球软件开发包 osgEarthX</a></h1></div>
			</div>
			<div id="content">
				<div class="sub-container">
					<div class="page-content post-content"><h3>osgEarthX 是什么？</h3>
<p>osgEarthX 是一套免费、开源的跨语言、跨平台、接口统一的三维数字地球软件开发包。osgEarthX 是基于开源三维场景引擎 <a href="http://openscenegraph.org" target="_blank">OpenSceneGraph</a> 和开源三维地图开发包 <a href="http://osgearth.org" target="_blank">osgEarth</a> 构建而来的。<span id="more-17"></span></p>
<h3>osgEarthX 能做什么？</h3>
<p>利用 osgEarthX 软件开发包，你可以构建桌面、Web、移动设备等高性能应用程序，可以采用除C++外例如C#、Delphi、Java、Javascript等其他编程语言开发应用程序。具体你可以构建以下形式的应用程序：</p>
<ul>
<li>在Windows、Linux/Unix、MacOSX下使用C++开发跨平台应用。</li>
<li>在Windows下使用COM控件和例如C#等语言构建桌面应用。</li>
<li>在Windows下使用跨浏览器插件和Javascript构建Web应用。</li>
<li>（其他平台和语言的支持正在开发中 &#8230; &#8230;）</li>
</ul>
<h3>osgEarthX 相关资源</h3>
<ul>
<li><a href="https://github.com/haozzzzzzzz/osgEarthX-binary" target="_blank">可执行程序下载</a></li>
<li>数据下载</li>
<li><a href="https://github.com/haozzzzzzzz/osgEarthX" target="_blank">查看源码</a></li>
<li><a href="http://hacksome.cn/category/articles/osgearthx/osgearthx-tutorials" target="_blank">查看教程</a></li>
<li><a href="http://hacksome.cn/category/articles/osgearthx/osgearthx-documents" target="_blank">查看文档</a></li>
</ul>
<h3>osgEarthX 作者声明</h3>
<p>osgEarthX 由 <a href="http://hacksome.cn/" target="_blank">hacksome.cn</a> 作者开发和维护，你可以在不通知原作者的情况下自由传播、使用和修改 osgEarthX 相关程序及源码，但本作者不对 因osgEarthX 产生的任何损失进行负责，所有解释权归本作者所有。一旦你使用了本作品或者源码，意味着你同意并接受以上条件。</p>
<p>希望 osgEarthX 能够为你提供开发的便利和乐趣，感谢你的使用。</p>
<p><a href="http://hacksome.cn/donate" target="_blank">捐赠</a>以支持 osgEarthX 的后续完善。</p>
<h3>osgEarthX 截图</h3>
<div style="width: 1376px" class="wp-caption aligncenter"><a href="https://github.com/haozzzzzzzz/osgEarthX-binary/blob/master/doc/screenshot/csharp.png?raw=true" target="_blank"><img src="https://github.com/haozzzzzzzz/osgEarthX-binary/blob/master/doc/screenshot/csharp.png?raw=true" alt="CSharp" width="1366" height="768" /></a><p class="wp-caption-text">CSharp</p></div>
<div style="width: 1360px" class="wp-caption aligncenter"><a href="https://github.com/haozzzzzzzz/osgEarthX-binary/blob/master/doc/screenshot/MFC.png?raw=true" target="_blank"><img src="https://github.com/haozzzzzzzz/osgEarthX-binary/blob/master/doc/screenshot/MFC.png?raw=true" alt="MFC" width="1350" height="742" /></a><p class="wp-caption-text">MFC</p></div>
<div style="width: 1331px" class="wp-caption aligncenter"><a href="https://github.com/haozzzzzzzz/osgEarthX-binary/blob/master/doc/screenshot/UbuntuQt.png?raw=true" target="_blank"><img src="https://github.com/haozzzzzzzz/osgEarthX-binary/blob/master/doc/screenshot/UbuntuQt.png?raw=true" alt="Ubuntu + Qt" width="1321" height="742" /></a><p class="wp-caption-text">Ubuntu + Qt</p></div>
<div style="width: 1330px" class="wp-caption aligncenter"><a href="https://github.com/haozzzzzzzz/osgEarthX-binary/blob/master/doc/screenshot/IE.png?raw=true" target="_blank"><img src="https://github.com/haozzzzzzzz/osgEarthX-binary/blob/master/doc/screenshot/IE.png?raw=true" alt="IE ActiveX" width="1320" height="742" /></a><p class="wp-caption-text">IE ActiveX</p></div>
<div style="width: 1331px" class="wp-caption aligncenter"><a href="https://github.com/haozzzzzzzz/osgEarthX-binary/blob/master/doc/screenshot/Chrome.png?raw=true" target="_blank"><img src="https://github.com/haozzzzzzzz/osgEarthX-binary/blob/master/doc/screenshot/Chrome.png?raw=true" alt="Chrome NPAPI" width="1321" height="742" /></a><p class="wp-caption-text">Chrome NPAPI</p></div>
<div style="width: 1376px" class="wp-caption aligncenter"><a href="https://github.com/haozzzzzzzz/osgEarthX-binary/blob/master/doc/screenshot/Annotation.png?raw=true" target="_blank"><img src="https://github.com/haozzzzzzzz/osgEarthX-binary/blob/master/doc/screenshot/Annotation.png?raw=true" alt="Annotations" width="1366" height="768" /></a><p class="wp-caption-text">Annotations</p></div>
</div>
				</div>
			</div>
									<div id="footer">
				<div class="sub-container">
					<div class="footer-list"><h4>社交账号</h4><ul><li><img src="http://hacksome.cn/wp-content/themes/hacksome/images/links/github-icon.png"/>&nbsp;<span><a href="https://github.com/haozzzzzzzz" target="_blank" title="Github">Github</a></span></li><li><img src="http://hacksome.cn/wp-content/themes/hacksome/images/links/linkedin-icon.png"/>&nbsp;<span><a href="http://cn.linkedin.com/in/hacksome" target="_blank" title="LinkedIn">LinkedIn</a></span></li></ul></div><div class="footer-list"><h4>友情链接</h4><ul><li><span><a href="http://pustone.com/" target="_blank" title="朴石网">朴石网</a></span></li><li><span><a href="http://malagis.com/" target="_blank" title="麻辣地信网">麻辣地信网</a></span></li></ul></div><div class="footer-list"><h4>访问</h4><ul><li><span><a href="http://creativecommons.org/licenses/by/3.0/deed.zh" target="_blank" title="许可协议">许可协议</a></span></li><li><span><a href="?mode=night" target="_blank" title="黑色主题">黑色主题</a></span></li></ul></div><div class="footer-list"><h4>联系</h4><ul><li><span><a href="http://hacksome.cn/about" target="_blank" title="关于本站">关于本站</a></span></li><li><span><a href="" target="_blank" title="捐赠">捐赠</a></span></li><li><span><a href="mailto:haker@hacksome.cn" target="_blank" title="邮箱">邮箱</a></span></li></ul></div>				</div>
			</div>
			<div id="footerPageFuncLinks" class="common-container">
				<div class="slim-sub-container">
					<ul class="pageLinks">
						<li><script type="text/javascript">var cnzz_protocol = (("https:" == document.location.protocol) ? " https://" : " http://");document.write(unescape("%3Cspan id='cnzz_stat_icon_1256730676'%3E%3C/span%3E%3Cscript src='" + cnzz_protocol + "s11.cnzz.com/z_stat.php%3Fid%3D1256730676%26show%3Dpic' type='text/javascript'%3E%3C/script%3E"));</script></li>
						<li class="scrollToTop">
							<a href="javascript:scroll( 0, 0 )" title="回到顶部">Top</a>
						</li>
					</ul>
				</div>
			</div>

			<div id="copyright">
				<div class="sub-container">
					<span><p>&copy; 2015 <a href="http://hacksome.cn">hacksome</a></p></span>
					<span class="website-description"><p>to be hacksome</p></span>
				</div>
			</div>

		</div>
		
			</body>
</html>