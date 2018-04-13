#!/usr/bin/env node

var prompt = require('prompt'),
    schema =
    {
        properties:
        {
            input:
            {
                pattern: /^[0-9]+$/,
                message: 'Please enter a digit.',
                required: true
            }
        }
    },
    number;

prompt.start();

prompt.get(schema, function (err, result)
{
    if (err) return console.error(err);

    number = result.input;
    console.log(factorial(number));
});

var factorial = function(num)
{
    for (i = num; i > 1; i--)
    {
        num *= (i - 1);
    }

    return num;
}
