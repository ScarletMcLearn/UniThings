// alert("Get ready to have your wallets blown!\nIntroducing...\nThe Tippanator!")

var form = $('form').serializeArray();

console.log(form);

// $('#submit').click(function(event)
// {
//     console.log(form);
// })


if (! $.cookie("cookieName")){
    // do your stuff
 
    // set cookie now
    $.cookie("cookieName", "firstSet", {"expires" : 7})
 }


//  (function() {
//     $(".button").click(function() {
//       // validate and process form here

//       console.log(form);
//     });
//   });



// var values = $('#submit').on('submit'. function()
// {
//     var x = $("#frm").val();
//     console.log(x);
// });


// $('form#userName').on('submit', function() {
//     var first_name = $('input#firstName').val();
//     var last_name = $('input#lastName').val();
//     });


////////////////////////////////////////////////////

//  This works! Balle ballee!!!

// $('#frm').submit(function(event)
// {
//     event.preventDefault();

//     var txt_input = $('#name').val();

//     console.log(txt_input);
// });

////////////////////////////////////////////////////



var $name = $('#name');
var $email = $('#email');
var $comment = $('#comment');
var $price = $('#price');
var $bill = $('#bill');
var $rating = $('#rating');
var $form = $('#frm')

$form.on('submit', function(e)
{
    // e.preventDefault();
    console.log('Submitted');

    var name_val = $name.val();
    var email_val = $email.val();
    var comment_val = $comment.val();
    var price_val = $price.val();
    var bill_val = $bill.val();
    var rating_val = $rating.val();
    var form_val = $form.val();

    console.log(name_val);
    console.log(email_val);
    console.log(comment_val);
    console.log(price_val);
    console.log(bill_val);
    console.log(rating_val);
    console.log(form_val);
   

    localStorage.setItem('name_val', name_val);

    window.location.replace("tip.html");
})



