(function ($) {
	$(document).ready(function() {
	/*
	$('.navbar-default .navbar-nav > li:nth-child(5) > a.btn').addClass('typeform-share link');
	$('.navbar-default .navbar-nav > li:nth-child(5) > a.btn').attr( "data-mode", "2" );
	*/
	  $(window).scroll(function () {
	    console.log($(window).scrollTop());
	
	    if ($(window).scrollTop() > 350) {
	      $('#navbar').addClass('navbar-fixed-top');
	      $('#navbar').removeClass('container');
	    }
	
	    if ($(window).scrollTop() < 31) {
	      $('#navbar').removeClass('navbar-fixed-top');
	      $('#navbar').addClass('container');
	    }
	  });
		$( ".page-produtos aside .menu" ).addClass("show-less");
		$(".page-produtos aside .menu").parent().append("<a class='mostrar'><i class='fa fa-chevron-circle-down' aria-hidden='true'>&nbsp;</i>Mostrar mais<a>");
		$(".mostrar").click(function() {
			$(this).prev().addClass("show-more");
			$(this).remove();
		});
		
	var $contactForm = $('#contact-site-form');
		$contactForm.submit(function(e) {
			e.preventDefault();
			$.ajax({
				url: '//formspree.io/rudamaia@gmail.com',
				method: 'POST',
				data: $(this).serialize(),
				dataType: 'json',
				beforeSend: function() {
					$contactForm.prepend('<div class="alert alert-warning">enviando…</div>');
				},
				success: function(data) {
					$contactForm.find('.alert-warning').hide();
					$contactForm.prepend('<div class="alert alert-success">Mensagem enviada!</div>');
				},
				error: function(err) {
					$contactForm.find('.alert--warning').hide();
					$contactForm.prepend('<div class="alert alert-danger">Ocorreu um erro. Tente novamente mais tarde...</div>');
				}
			});
		});
	});
}(jQuery));