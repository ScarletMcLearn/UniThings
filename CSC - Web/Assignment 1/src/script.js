// alert("Get ready to have your wallets blown!\nIntroducing...\nThe Tippanator!")

var form = $('form').serializeArray();

console.log(form);

// $('#submit').click(function(event)
// {
//     console.log(form);
// })


// if (! $.cookie("cookieName")){
//     // do your stuff
 
//     // set cookie now
//     $.cookie("cookieName", "firstSet", {"expires" : 7})
//  }


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

var nm = NaN;
var eml = NaN;
var cmnt = NaN;
var prc = NaN;
var bll = NaN;
var rtn = NaN;
var frm = NaN;


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

    nm = $name.val();
    eml = $email.val();
    cmnt = $comment.val();
    prc = $price.val();
    bll = $bill.val();
    rtn = $rating.val();
    frm = $form.val();


    console.log(name_val);
    console.log(email_val);
    console.log(comment_val);
    console.log(price_val);
    console.log(bill_val);
    console.log(rating_val);
    console.log(form_val);
   

    localStorage.setItem('name_val', name_val);
    localStorage.setItem('email_val', email_val);
    localStorage.setItem('comment_val', comment_val);
    localStorage.setItem('price_val', price_val);
    localStorage.setItem('bill_val', bill_val);
    localStorage.setItem('rating_val', rating_val);
    localStorage.setItem('form_val', form_val);


    window.location.replace("tip.html");
})



function send() {
    console.log('Testing!');


    var name_val = $name.val();
    var email_val = $email.val();
    var comment_val = $comment.val();
    var price_val = $price.val();
    var bill_val = $bill.val();
    var rating_val = $rating.val();
    var form_val = $form.val();

    nm = $name.val();
    eml = $email.val();
    cmnt = $comment.val();
    prc = $price.val();
    bll = $bill.val();
    rtn = $rating.val();
    frm = $form.val();


    console.log(name_val);
    console.log(email_val);
    console.log(comment_val);
    console.log(price_val);
    console.log(bill_val);
    console.log(rating_val);
    console.log(form_val);

    if(rating_val == '*****')
    {
        localStorage.setItem('rating_val', 5);
    }
    else if(rating_val == '****')
    {
        localStorage.setItem('rating_val', 4);
    }
    else if(rating_val == '***')
    {
        localStorage.setItem('rating_val', 3);
    }
    else if(rating_val == '**')
    {
        localStorage.setItem('rating_val', 2);
    }
    else if(rating_val == '*')
    {
        localStorage.setItem('rating_val', 1);
    }



    localStorage.setItem('name_val', name_val);
    localStorage.setItem('email_val', email_val);
    localStorage.setItem('comment_val', comment_val);
    localStorage.setItem('price_val', price_val);
    localStorage.setItem('bill_val', bill_val);
    // localStorage.setItem('rating_val', rating_val);
    localStorage.setItem('form_val', form_val);


    console.log('Before');
    var bs =  localStorage.getItem('name_val');
    console.log(bs);
    console.log('After');

    window.location.assign("tip.html");
  }

var f_tip =  localStorage.getItem('price_val') * localStorage.getItem('rating_val') / 100;

$('#tipi').append(f_tip);