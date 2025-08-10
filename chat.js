import OpenAI from "openai";

const client = new OpenAI({
  apiKey: process.env.OPENAI_API_KEY
});

const main = async () => {
  const response = await client.chat.completions.create({
    model: "gpt-4o-mini",
    messages: [
      { role: "system", content: "You are a helpful assistant" },
      { role: "user", content: "Viết một câu chào bằng tiếng Việt" }
    ]
  });

  console.log(response.choices[0].message.content);
};

main();
