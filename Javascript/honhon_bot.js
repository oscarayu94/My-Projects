var mineflayer = require('mineflayer');

var bot = mineflayer.createBot({
  host: "earwig.aternos.host", // optional
  port:10955,
  // keepAlive: true,
  // checkTimeoutInterval: 15*1000,
  chatLenghtLimit:100,
  username:"HonHonBot",
  version: 1.8                 // false corresponds to auto version detection (that's the default), put for example "1.8.8" if you need a specific version
});

bot.on('message', (message) => {
  console.log(message.toAnsi());
});

bot.on('login', function() {
  console.log("Bot connected!");
  bot.chat("bot");
  bot.chat("HonHonBot a l'appareil!");
});

//These two function down here should bnot be implented in any case, since they crash the server eventually

// function bucket(){
//   status = 'bucket';
//   while(true){
//     setTimeout(bot.inventory.findInventoryItem,1000)
//     setTimeout(bot.activateItem, 1000)
//     setTimeout(bot.chat,1000)
//     selectBucket();
//     bot.activateItem();
//   }
// }

// function selectBucket() {
//   var bucket = bot.inventory.findInventoryItem(325);
//   var bucket_count = bot.inventory.count(325);
//   if (bucket) {
//       bot.equip(bucket, 'hand');
//       console.log(bucket_count + " fishing rods, " + rod.metadata + " damage taken from current rod");
//   } else {
//       bot.chat("/clear HonHonBot");
//       bot.chat("/give HonHonBot bucket 640");
//       console.log("Renewing bucket!");
//   }
//   return bucket;
// }