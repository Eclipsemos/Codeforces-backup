a = (x, y) => (x + y)

a = function (a) {
    return (c, d) => {
        if (c > d)
            return c / d;
        else
            return a(c,d);
    };

}(a);

return console.log(a(1, 2));














